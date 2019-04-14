enum rfc_input_type {
	rfc_unknown,

	rfc_int,
	rfc_int_int,
	rfc_int_int_int,
	rfc_int_int_int_int,

	rfc_char,
	rfc_char_char,
	rfc_char_char_char,
	rfc_char_char_char_char,

	rfc_inta,
	rfc_inta_int,
	rfc_chara,
	rfc_chara_char,

	rfc_int_char,
	rfc_int_chara,
	rfc_inta_char,
	rfc_inta_chara,

	rfc_char_int,
	rfc_chara_int,
	rfc_char_inta,
	rfc_chara_inta
};

enum rfc_input_type rfc_get_input_type_from_param_descriptor(char * params) {
	if (params[0] == 'i') {
		if (rfc_compare_two_strings(params, "int", 127)) {
			return rfc_int;
		} else if (rfc_compare_two_strings(params, "int*", 127)) {
			return rfc_inta;
		} else if (rfc_compare_two_strings(params, "int*,int", 127)) {
			return rfc_inta_int;
		} else if (rfc_compare_two_strings(params, "int,int", 127)) {
			return rfc_int_int;
		} else if (rfc_compare_two_strings(params, "int,int,int", 127)) {
			return rfc_int_int_int;
		} else if (rfc_compare_two_strings(params, "int,int,int,int", 127)) {
			return rfc_int_int_int_int;
		} else if (rfc_compare_two_strings(params, "int,char", 127)) {
			return rfc_int_char;
		} else if (rfc_compare_two_strings(params, "int*,char", 127)) {
			return rfc_inta_char;
		} else if (rfc_compare_two_strings(params, "int,char*", 127)) {
			return rfc_int_chara;
		}
	} else if (params[0] == 'c') {
		if (rfc_compare_two_strings(params, "char", 127)) {
			return rfc_char;
		} else if (rfc_compare_two_strings(params, "char*", 127)) {
			return rfc_chara;
		} else if (rfc_compare_two_strings(params, "char*,int", 127)) {
			return rfc_chara_int;
		} else if (rfc_compare_two_strings(params, "char,char", 127)) {
			return rfc_char_char;
		} else if (rfc_compare_two_strings(params, "char,char,char", 127)) {
			return rfc_char_char_char;
		} else if (rfc_compare_two_strings(params, "char,char,char,char", 127)) {
			return rfc_char_char_char_char;
		} else if (rfc_compare_two_strings(params, "char,int", 127)) {
			return rfc_char_int;
		} else if (rfc_compare_two_strings(params, "char*,int", 127)) {
			return rfc_chara_int;
		} else if (rfc_compare_two_strings(params, "char,int*", 127)) {
			return rfc_char_inta;
		} else if (rfc_compare_two_strings(params, "char*,int*", 127)) {
			return rfc_chara_inta;
		}
	}
	return rfc_unknown;
}