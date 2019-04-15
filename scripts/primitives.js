function recursively_generate_descriptor_list(options, depth = 0, max_depth = 2) {
	if (depth >= max_depth) {
		return [];
	}
	var thisList = [];
	for (var par in options) {
		thisList.push({
			"type": options[par],
			"parameter": par
		});
		recursively_generate_descriptor_list(options, depth+1, max_depth).map(
			element => ({
				"type": options[par]+"_"+element.type,
				"parameter": par+","+element.parameter
			})
		).forEach(element => thisList.push(element));
	}
	return thisList;
}

function get_options_from_type_array(options) {
	var thisObject = {};

	for (var par in options) {
		thisObject[options[par]] = options[par];
		thisObject[options[par]+"*"] = options[par]+"a";
	}

	return thisObject;
}


module.exports = { recursively_generate_descriptor_list, get_options_from_type_array };