/**
 * This utility generates the source for `rfc_input_type.c`
 *
 * It is used to add new types to the library
 */

const { recursively_generate_descriptor_list, get_options_from_type_array } = require("./primitives.js");

generate_file(["int", "char"], 4);

function generate_enum(type_descriptor_list = [{ type: 'inta', parameter: 'int*' }]) {
	const list = type_descriptor_list;
	const lines = [];
	lines.push("enum rfc_input_type {");
	lines.push("\trfc_unknown,");
	lines.push("\trfc_void,");
	lines.push("");
	for (let index in list) {
		lines.push("\trfc_"+list[index].type+((index == list.length-1)?"":","));
	}
	lines.push("}");
	return lines.join("\n")+"\n";
}

function generate_function(type_descriptor_list = [{ type: 'inta', parameter: 'int*' }]) {
	const list = type_descriptor_list;
	const lines = [];
	const functionName = "rfc_get_input_type_from_param_descriptor";
	lines.push("enum rfc_input_type "+functionName+"(char * params) {");
	lines.push("\tint m = RFC_MAX_FUNCTION_DESCRIPTOR_SIZE;");

	const startingLetters = [];
	for (let index in list) {
		if (!startingLetters.includes(list[index].parameter[0])) {
			startingLetters.push(list[index].parameter[0]);
		}
	}
	lines.push("\tif (params[0] == '\\0') {");
	lines.push("\t\treturn rfc_void;");

	startingLetters.forEach(function(letter) {
		lines.push("\t} else if (params[0] == '"+letter+"') {");
		let isFirst = true;
		for (let index in list) {
			if (letter != list[index].parameter[0]) {
				continue;
			}
			const linePrefix = "\t\t";
			linePrefix += isFirst?"if": "} else if";
			if (isFirst) {
				isFirst = false;
			}
			const condition = "(rfc_compare_two_strings(params, \""+list[index].parameter+"\", m))";
			lines.push(linePrefix + " " + condition + " {");
			lines.push("\t\t\treturn rfc_"+list[index].type+";");
		}
		lines.push("\t\t}");
	});
	lines.push("\t}");
	lines.push("\treturn rfc_unknown;");
	lines.push("}");
	return lines.join("\n")+"\n";
}

function generate_file(type_array_list = ["int", "char"], max_depth = 2) {
	const opts = get_options_from_type_array(["int", "char"]);
	const list = recursively_generate_descriptor_list(opts, 0, max_depth);

	const writeFileSync = (typeof fs === "object" ? fs : require("fs")).writeFileSync;
	const join = (typeof path === "object" ? path : require("path")).join;
	const targetFilePath = join(__dirname, "..", "src", "rfc_input_type.c");

	const prefix = "/**\n * This file was generated automatically by the command \"npm run generate-input-type\".\n * Do not change it manually.\n */\n\n";
	const enum_declaration = generate_enum(list);
	const function_declaration = generate_function(list);
	const content = prefix + enum_declaration + "\n" + function_declaration;
	writeFileSync(targetFilePath, content, "utf-8");
}