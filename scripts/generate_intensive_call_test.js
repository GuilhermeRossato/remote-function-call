/**
 * This utility generates the source for `test_call_intensive_call.c`
 *
 * It is used to add new types's tests to the library
 */

const { recursively_generate_descriptor_list, get_options_from_type_array } = require("./primitives.js");

generate_test_files(["int", "char"], 3);

function generate_function_declarations(type_descriptor_list = [{ type: 'inta', parameter: 'int*' }], type="array") {
	const list = type_descriptor_list;
	const lines = [];

	for (let index in list) {
		if (type !== "array" && list[index].parameter.includes("*")) {
			continue;
		} else if (type === "array"  && !list[index].parameter.includes("*")) {
			continue;
		}
		const parameterList = list[index].parameter.split(",").map((a,i) => a + " " + String.fromCharCode(97+i)).join(", ");
		const globalValueSum = list[index].parameter.split(",").map((a,i) => {
			if (a.includes("*")) {
				return "(int) "+String.fromCharCode(97+i)+"[2]";
			} else {
				return "(int) "+String.fromCharCode(97+i);
			}
		}).join(")+(");
		lines.push("int func_"+list[index].type+"("+parameterList+") {");
		lines.push("\tglobal_value = ("+globalValueSum+");");
		lines.push("\treturn 1;");
		lines.push("}");
	}

	return lines.join("\n")+"\n";
	console.log(type_array_list);
}

function generate_number_for_index(index) {
	return index;
}

function generate_function_expose(type_descriptor_list = [{ type: 'inta', parameter: 'int*' }], type="array") {
	const list = type_descriptor_list;
	const lines = [];
	lines.push("int execute_expose() {");
	var isFirst = true;
	for (let index in list) {
		if (type !== "array" && list[index].parameter.includes("*")) {
			continue;
		} else if (type === "array"  && !list[index].parameter.includes("*")) {
			continue;
		}
		const parameterList = list[index].parameter.split(",").map((a,i) => a + " " + String.fromCharCode(97+i)).join(", ");
		const exposeCall = "rfc_expose(\"int func_"+list[index].type+"("+list[index].parameter+")\", func_"+list[index].type+")";

		lines.push("\t"+(isFirst?"if":"} else if")+" (!"+exposeCall+") {");
		lines.push("\t\tprintf(\"Test failed: The 'func_"+list[index].type+"' expose returned an error code\");");
		lines.push("\t\texit(1);");

		if (isFirst) {
			isFirst = false;
		}
	}
	lines.push("\t}");
	lines.push("\treturn 1;");
	lines.push("}");
	return lines.join("\n")+"\n";
}

function get_unique_variable(prefix, index, parameterIndex=0) {
	return prefix+index.toString()+"_"+parameterIndex.toString();
}

function generate_function_test(type_descriptor_list = [{ type: 'inta', parameter: 'int*' }], type="array") {
	const list = type_descriptor_list;
	const lines = [];
	lines.push("int execute_test() {");
	lines.push("\tint expected_value;");

	for (let index in list) {
		if (type !== "array" && list[index].parameter.includes("*")) {
			continue;
		} else if (type === "array"  && !list[index].parameter.includes("*")) {
			continue;
		}
		const thisPointerList = [];
		let toExpect = 0;
		const parameterList = list[index].parameter.split(",").map((a,i) => {
			if (a.includes("*")) {
				thisPointerList.push({
					"name": get_unique_variable("ptr", index, i),
					"type": a.replace("*", ""),
					"value": "{127, "+generate_number_for_index(index)+", 127}"
				});
				return '"'+a+'"'+", 3, "+get_unique_variable("ptr", index, i);
			} else {
				return '"'+a+'"'+", "+generate_number_for_index(index);
			}
		}).join(", ");
		thisPointerList.forEach(pointer => {
			lines.push("\t"+pointer.type+" "+pointer.name+"[] = "+pointer.value+";");
		});

		const testCall = "rfc_call(\"internal\", \"func_"+list[index].type+"\", "+parameterList+")";

		lines.push("\tif (!"+testCall+") {");
		lines.push("\t\tprintf(\"Test failed: The 'func_"+list[index].type+"' call returned an error code\");");
		lines.push("\t\texit(1);");
		lines.push("\t}");
		lines.push("\texpected_value = "+generate_number_for_index(index)+"*"+list[index].parameter.split(",").length+";");
		lines.push("\tif (global_value != expected_value) {");
		lines.push("\t\tprintf(\"Test failed: The 'func_"+list[index].type+"' call did not change the global value as expected\");");
		lines.push("\t\tprintf(\"Expect: %d\", expected_value);");
		lines.push("\t\tprintf(\"Output: %d\", global_value);");
		lines.push("\t\texit(1);");
		lines.push("\t}");
		lines.push("");
	}
	lines.push("\treturn 1;");
	lines.push("}");
	return lines.join("\n")+"\n";
}

function generate_main() {
	return [
		"int main() {",
		"\texecute_expose();",
		"\texecute_test();",
		"\treturn 0;",
		"}"
	].join("\n")+"\n";
}

function generate_test_variation(type_array_list = ["int", "char"], max_depth = 2, type="simple") {
	var prefix = "/**\n * This file was generated automatically by the command \"npm run generate-intensive-call-test\".\n * Do not change it manually.\n */\n\n";

	prefix += [
		'#include <stdlib.h>',
		'#include \"../src/rfc_shared.h\"',
		'#include \"../src/rfc_call.c\"',
		'#include \"../src/rfc_expose.c\"',
		'',
		'int global_value = 0;'
	].join("\n")+"\n";


	var opts = get_options_from_type_array(["int", "char"]);
	var list = recursively_generate_descriptor_list(opts, 0, max_depth);

	var declarations = generate_function_declarations(list, type);
	var exposure = generate_function_expose(list, type);
	var tests = generate_function_test(list, type);
	var main = generate_main();

	var content = prefix + declarations + "\n" + exposure + "\n" + tests + "\n" + main;

	const writeFileSync = (typeof fs === "object" ? fs : require("fs")).writeFileSync;
	const join = (typeof path === "object" ? path : require("path")).join;
	const targetFilePath = join(__dirname, "..", "test", "generated_test_call_internal_intensive_"+type+".c");
	writeFileSync(targetFilePath, content, "utf-8");
}

function generate_test_files(type_array_list = ["int", "char"], max_depth = 2) {
	generate_test_variation(type_array_list, max_depth, "simple");
	generate_test_variation(type_array_list, max_depth, "array");
}