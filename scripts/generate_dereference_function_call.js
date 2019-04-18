/**
 * This utility generates the source for `rfc_dereference_function_call.c`
 *
 * It is used to add new types to the library
 */

const { recursively_generate_descriptor_list, get_options_from_type_array } = require("./primitives.js");
const fs = require("fs");
const path = require("path");

generate_file(
	path.join(__dirname, "..", "src", "rfc_input_type.c"),
	path.join(__dirname, "..", "src", "rfc_dereference_function_call.c")
);

function check_type_is_array(type) {
	return (type[type.length-1] == 'a') || (type[type.length-1] == '*');
}

function convert_type_to_declaration(type, isArray = undefined) {
	if (isArray == undefined) {
		isArray = check_type_is_array(type);
	}
	if (isArray) {
		return type.substr(0, type.length-1)+"*";
	} else {
		return type;
	}
}

/**

} else if (i == rfc_chara_char) {
	int (*callback)(char*, char, int);
	callback = func;

	return callback(
		 ((char *) ptr[0]),
		*((char *) ptr[1]),
		counts[0]
	);

 */
function generate_callback_declaration(lines, typeListDeclaration,) {
	lines.push("\treturn callback(");
	var line;
	var isFirst = true;
	const arrayIndexes = [];
	for(var index in typeListDeclaration) {
		if (!isFirst) {
			lines[lines.length-1] += ","
		}
		isFirst = false;
		const type = typeListDeclaration[index];
		const isArray = check_type_is_array(type);
		if (isArray) {
			arrayIndexes.push(index);
		}
		line = "\t\t";
		line += isArray ? " " : "*";
		line += "(("+type.replace("*", "")+" *) ptr["+index+"])";
		lines.push(line);
	}
	for (var i in arrayIndexes) {
		if (!isFirst) {
			lines[lines.length-1] += ","
		}
		isFirst = false;
		line = "\t\t";
		line += "counts["+arrayIndexes[i]+"]";
		lines.push(line);
	}
	lines.push("\t);");

}

function generate_condition_line(enum_declaration) {
	const lines = [];
	let isFirst = true;
	for (let index in enum_declaration) {
		var [rfc, number] = enum_declaration[index].split("=");
		if (rfc == undefined || number == undefined || rfc == "rfc_unknown") {
			continue;
		}

		var line = (isFirst?"if":"} else if");
		if (isFirst) { isFirst = false; }
		line += " (i == "+rfc+") {";
		lines.push(line);

		if (rfc == "rfc_void") {
			lines.push("\tint (*callback)();");
			lines.push("\tcallback = func;");
			lines.push("\treturn callback();");
		} else {
			let arrayCount = 0;
			var typeList = rfc.substr(4).split("_");
			var typeListDeclaration = [];
			typeList.forEach(type => {
				const isArray = check_type_is_array(type);
				if (isArray) {
					arrayCount++;
				}
				typeListDeclaration.push(convert_type_to_declaration(type, isArray));
			});
			line = "\tint (*callback)("+typeListDeclaration.join(", ");
			for (var i = 0 ; i < arrayCount; i ++) {
				line += ", int";
			}
			line += ");";

			lines.push(line);
			lines.push("\tcallback = func;");
			generate_callback_declaration(lines, typeListDeclaration, arrayCount);
		}
	}
	lines.push("} else {");
	lines.push("\treturn rfc_error_insupported_something(\"input type on dereference function call\", i);");
	lines.push("}");
	lines.forEach((line,index) => lines[index] = "\t"+lines[index]);
	return lines;
}

function generate_file(inputTypeFilePath, targetFilePath) {
	const enum_declaration = get_enum_declaration_from_file(inputTypeFilePath);
	const prefix = get_prefix();
	const conditions = generate_condition_line(enum_declaration).join("\n");
	const sufix = get_sufix();
	const content = prefix+conditions+sufix;
	fs.writeFileSync(targetFilePath, content, "utf-8");
}

function get_enum_declaration_from_file(file) {
	var startsWith = "enum rfc_input_type {";
	var endsWith = "};";
	var content = fs.readFileSync(file, "utf-8");
	if (content.indexOf(startsWith) != -1) {
		content = content.substr(content.indexOf(startsWith)+startsWith.length+1);
	}
	if (content.indexOf(endsWith) != -1) {
		content = content.substr(0, content.indexOf(endsWith));
	}
	return content.split("\n").map(a=>a.trim().split(" ").join(""));
}

function get_sufix() {
	return "\treturn 0;\n}\n"
}

function get_prefix() {
	return `/**
 * This file was generated automatically by the command "npm run generate-dereference-call".
 * Refrain from changing it manually.
 */

#include "rfc_shared.h"

int rfc_dereference_function_call(void * func, enum rfc_input_type i, unsigned char * buffer, unsigned int buffer_size) {
	int header_size = sizeof(int) * 2;
	void * helper = buffer;
	int * int_aux = helper;
	char * char_aux = helper;

	int types[6];
	int counts[6];
	void * ptr[6];
	int ptr_id = 0;
	int index = 0;
	int state = 0;
	while (index < buffer_size && ptr_id < 6) {
		if (state == 0) {
			types[ptr_id] = *((int *) &buffer[index]);
			index += sizeof(int);
			state = 1;
		} else if (state == 1) {
			counts[ptr_id] = *((int *) &buffer[index]);
			index += sizeof(int);
			state = 2;
		} else if (state == 2) {
			if (types[ptr_id] == RFC_INT) {
				ptr[ptr_id] = (void *) &buffer[index];
				index += sizeof(int);
				ptr_id++;
				state = 0;
			} else if (types[ptr_id] == RFC_CHAR) {
				ptr[ptr_id] = (void *) &buffer[index];
				index += sizeof(char);
				ptr_id++;
				state = 0;
			} else if (types[ptr_id] == RFC_INT_ARRAY) {
				ptr[ptr_id] = (void *) &buffer[index];
				index += sizeof(int) * counts[ptr_id];
				ptr_id++;
				state = 0;
			} else if (types[ptr_id] == RFC_CHAR_ARRAY) {
				ptr[ptr_id] = (void *) &buffer[index];
				index += sizeof(char) * counts[ptr_id];
				ptr_id++;
				state = 0;
			} else {
				return rfc_error_unimplemented("type id at function dereference");
			}
		} else {
			return rfc_error_invalid_something("state at function dereference");
		}
	}
	`;
}