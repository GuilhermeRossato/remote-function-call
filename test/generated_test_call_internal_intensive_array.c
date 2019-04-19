/**
 * This file was generated automatically by the command "npm run generate-intensive-call-test".
 * Refrain from changing it manually.
 */

#include <stdlib.h>
#include "../src/rfc_shared.h"
#include "../src/rfc_call.c"
#include "../src/rfc_expose.c"

int global_value = 0;
int func_int_int_int_inta(int a, int b, int c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_int_int_int_chara(int a, int b, int c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_int_int_inta(int a, int b, int* c) {
	global_value = ((int) a)+((int) b)+((int) c[2]);
	return 1;
}
int func_int_int_inta_int(int a, int b, int* c, int d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_int_int_inta_inta(int a, int b, int* c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_int_inta_char(int a, int b, int* c, char d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_int_int_inta_chara(int a, int b, int* c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_int_char_inta(int a, int b, char c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_int_int_char_chara(int a, int b, char c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_int_int_chara(int a, int b, char* c) {
	global_value = ((int) a)+((int) b)+((int) c[2]);
	return 1;
}
int func_int_int_chara_int(int a, int b, char* c, int d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_int_int_chara_inta(int a, int b, char* c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_int_chara_char(int a, int b, char* c, char d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_int_int_chara_chara(int a, int b, char* c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_inta(int a, int* b) {
	global_value = ((int) a)+((int) b[2]);
	return 1;
}
int func_int_inta_int(int a, int* b, int c) {
	global_value = ((int) a)+((int) b[2])+((int) c);
	return 1;
}
int func_int_inta_int_int(int a, int* b, int c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_int_inta_int_inta(int a, int* b, int c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_int_inta_int_char(int a, int* b, int c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_int_inta_int_chara(int a, int* b, int c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_int_inta_inta(int a, int* b, int* c) {
	global_value = ((int) a)+((int) b[2])+((int) c[2]);
	return 1;
}
int func_int_inta_inta_int(int a, int* b, int* c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_int_inta_inta_inta(int a, int* b, int* c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_inta_inta_char(int a, int* b, int* c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_int_inta_inta_chara(int a, int* b, int* c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_inta_char(int a, int* b, char c) {
	global_value = ((int) a)+((int) b[2])+((int) c);
	return 1;
}
int func_int_inta_char_int(int a, int* b, char c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_int_inta_char_inta(int a, int* b, char c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_int_inta_char_char(int a, int* b, char c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_int_inta_char_chara(int a, int* b, char c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_int_inta_chara(int a, int* b, char* c) {
	global_value = ((int) a)+((int) b[2])+((int) c[2]);
	return 1;
}
int func_int_inta_chara_int(int a, int* b, char* c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_int_inta_chara_inta(int a, int* b, char* c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_inta_chara_char(int a, int* b, char* c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_int_inta_chara_chara(int a, int* b, char* c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_char_int_inta(int a, char b, int c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_int_char_int_chara(int a, char b, int c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_int_char_inta(int a, char b, int* c) {
	global_value = ((int) a)+((int) b)+((int) c[2]);
	return 1;
}
int func_int_char_inta_int(int a, char b, int* c, int d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_int_char_inta_inta(int a, char b, int* c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_char_inta_char(int a, char b, int* c, char d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_int_char_inta_chara(int a, char b, int* c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_char_char_inta(int a, char b, char c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_int_char_char_chara(int a, char b, char c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_int_char_chara(int a, char b, char* c) {
	global_value = ((int) a)+((int) b)+((int) c[2]);
	return 1;
}
int func_int_char_chara_int(int a, char b, char* c, int d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_int_char_chara_inta(int a, char b, char* c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_char_chara_char(int a, char b, char* c, char d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_int_char_chara_chara(int a, char b, char* c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_chara(int a, char* b) {
	global_value = ((int) a)+((int) b[2]);
	return 1;
}
int func_int_chara_int(int a, char* b, int c) {
	global_value = ((int) a)+((int) b[2])+((int) c);
	return 1;
}
int func_int_chara_int_int(int a, char* b, int c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_int_chara_int_inta(int a, char* b, int c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_int_chara_int_char(int a, char* b, int c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_int_chara_int_chara(int a, char* b, int c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_int_chara_inta(int a, char* b, int* c) {
	global_value = ((int) a)+((int) b[2])+((int) c[2]);
	return 1;
}
int func_int_chara_inta_int(int a, char* b, int* c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_int_chara_inta_inta(int a, char* b, int* c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_chara_inta_char(int a, char* b, int* c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_int_chara_inta_chara(int a, char* b, int* c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_chara_char(int a, char* b, char c) {
	global_value = ((int) a)+((int) b[2])+((int) c);
	return 1;
}
int func_int_chara_char_int(int a, char* b, char c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_int_chara_char_inta(int a, char* b, char c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_int_chara_char_char(int a, char* b, char c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_int_chara_char_chara(int a, char* b, char c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_int_chara_chara(int a, char* b, char* c) {
	global_value = ((int) a)+((int) b[2])+((int) c[2]);
	return 1;
}
int func_int_chara_chara_int(int a, char* b, char* c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_int_chara_chara_inta(int a, char* b, char* c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_int_chara_chara_char(int a, char* b, char* c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_int_chara_chara_chara(int a, char* b, char* c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta(int* a) {
	global_value = ((int) a[2]);
	return 1;
}
int func_inta_int(int* a, int b) {
	global_value = ((int) a[2])+((int) b);
	return 1;
}
int func_inta_int_int(int* a, int b, int c) {
	global_value = ((int) a[2])+((int) b)+((int) c);
	return 1;
}
int func_inta_int_int_int(int* a, int b, int c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_inta_int_int_inta(int* a, int b, int c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_int_int_char(int* a, int b, int c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_inta_int_int_chara(int* a, int b, int c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_int_inta(int* a, int b, int* c) {
	global_value = ((int) a[2])+((int) b)+((int) c[2]);
	return 1;
}
int func_inta_int_inta_int(int* a, int b, int* c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_inta_int_inta_inta(int* a, int b, int* c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_int_inta_char(int* a, int b, int* c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_inta_int_inta_chara(int* a, int b, int* c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_int_char(int* a, int b, char c) {
	global_value = ((int) a[2])+((int) b)+((int) c);
	return 1;
}
int func_inta_int_char_int(int* a, int b, char c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_inta_int_char_inta(int* a, int b, char c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_int_char_char(int* a, int b, char c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_inta_int_char_chara(int* a, int b, char c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_int_chara(int* a, int b, char* c) {
	global_value = ((int) a[2])+((int) b)+((int) c[2]);
	return 1;
}
int func_inta_int_chara_int(int* a, int b, char* c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_inta_int_chara_inta(int* a, int b, char* c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_int_chara_char(int* a, int b, char* c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_inta_int_chara_chara(int* a, int b, char* c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_inta(int* a, int* b) {
	global_value = ((int) a[2])+((int) b[2]);
	return 1;
}
int func_inta_inta_int(int* a, int* b, int c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c);
	return 1;
}
int func_inta_inta_int_int(int* a, int* b, int c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_inta_inta_int_inta(int* a, int* b, int c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_inta_int_char(int* a, int* b, int c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_inta_inta_int_chara(int* a, int* b, int c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_inta_inta(int* a, int* b, int* c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2]);
	return 1;
}
int func_inta_inta_inta_int(int* a, int* b, int* c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_inta_inta_inta_inta(int* a, int* b, int* c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_inta_inta_char(int* a, int* b, int* c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_inta_inta_inta_chara(int* a, int* b, int* c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_inta_char(int* a, int* b, char c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c);
	return 1;
}
int func_inta_inta_char_int(int* a, int* b, char c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_inta_inta_char_inta(int* a, int* b, char c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_inta_char_char(int* a, int* b, char c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_inta_inta_char_chara(int* a, int* b, char c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_inta_chara(int* a, int* b, char* c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2]);
	return 1;
}
int func_inta_inta_chara_int(int* a, int* b, char* c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_inta_inta_chara_inta(int* a, int* b, char* c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_inta_chara_char(int* a, int* b, char* c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_inta_inta_chara_chara(int* a, int* b, char* c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_char(int* a, char b) {
	global_value = ((int) a[2])+((int) b);
	return 1;
}
int func_inta_char_int(int* a, char b, int c) {
	global_value = ((int) a[2])+((int) b)+((int) c);
	return 1;
}
int func_inta_char_int_int(int* a, char b, int c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_inta_char_int_inta(int* a, char b, int c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_char_int_char(int* a, char b, int c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_inta_char_int_chara(int* a, char b, int c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_char_inta(int* a, char b, int* c) {
	global_value = ((int) a[2])+((int) b)+((int) c[2]);
	return 1;
}
int func_inta_char_inta_int(int* a, char b, int* c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_inta_char_inta_inta(int* a, char b, int* c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_char_inta_char(int* a, char b, int* c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_inta_char_inta_chara(int* a, char b, int* c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_char_char(int* a, char b, char c) {
	global_value = ((int) a[2])+((int) b)+((int) c);
	return 1;
}
int func_inta_char_char_int(int* a, char b, char c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_inta_char_char_inta(int* a, char b, char c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_char_char_char(int* a, char b, char c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_inta_char_char_chara(int* a, char b, char c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_char_chara(int* a, char b, char* c) {
	global_value = ((int) a[2])+((int) b)+((int) c[2]);
	return 1;
}
int func_inta_char_chara_int(int* a, char b, char* c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_inta_char_chara_inta(int* a, char b, char* c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_char_chara_char(int* a, char b, char* c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_inta_char_chara_chara(int* a, char b, char* c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_chara(int* a, char* b) {
	global_value = ((int) a[2])+((int) b[2]);
	return 1;
}
int func_inta_chara_int(int* a, char* b, int c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c);
	return 1;
}
int func_inta_chara_int_int(int* a, char* b, int c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_inta_chara_int_inta(int* a, char* b, int c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_chara_int_char(int* a, char* b, int c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_inta_chara_int_chara(int* a, char* b, int c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_chara_inta(int* a, char* b, int* c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2]);
	return 1;
}
int func_inta_chara_inta_int(int* a, char* b, int* c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_inta_chara_inta_inta(int* a, char* b, int* c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_chara_inta_char(int* a, char* b, int* c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_inta_chara_inta_chara(int* a, char* b, int* c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_chara_char(int* a, char* b, char c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c);
	return 1;
}
int func_inta_chara_char_int(int* a, char* b, char c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_inta_chara_char_inta(int* a, char* b, char c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_chara_char_char(int* a, char* b, char c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_inta_chara_char_chara(int* a, char* b, char c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_inta_chara_chara(int* a, char* b, char* c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2]);
	return 1;
}
int func_inta_chara_chara_int(int* a, char* b, char* c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_inta_chara_chara_inta(int* a, char* b, char* c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_inta_chara_chara_char(int* a, char* b, char* c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_inta_chara_chara_chara(int* a, char* b, char* c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_int_int_inta(char a, int b, int c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_char_int_int_chara(char a, int b, int c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_char_int_inta(char a, int b, int* c) {
	global_value = ((int) a)+((int) b)+((int) c[2]);
	return 1;
}
int func_char_int_inta_int(char a, int b, int* c, int d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_char_int_inta_inta(char a, int b, int* c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_int_inta_char(char a, int b, int* c, char d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_char_int_inta_chara(char a, int b, int* c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_int_char_inta(char a, int b, char c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_char_int_char_chara(char a, int b, char c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_char_int_chara(char a, int b, char* c) {
	global_value = ((int) a)+((int) b)+((int) c[2]);
	return 1;
}
int func_char_int_chara_int(char a, int b, char* c, int d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_char_int_chara_inta(char a, int b, char* c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_int_chara_char(char a, int b, char* c, char d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_char_int_chara_chara(char a, int b, char* c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_inta(char a, int* b) {
	global_value = ((int) a)+((int) b[2]);
	return 1;
}
int func_char_inta_int(char a, int* b, int c) {
	global_value = ((int) a)+((int) b[2])+((int) c);
	return 1;
}
int func_char_inta_int_int(char a, int* b, int c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_char_inta_int_inta(char a, int* b, int c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_char_inta_int_char(char a, int* b, int c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_char_inta_int_chara(char a, int* b, int c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_char_inta_inta(char a, int* b, int* c) {
	global_value = ((int) a)+((int) b[2])+((int) c[2]);
	return 1;
}
int func_char_inta_inta_int(char a, int* b, int* c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_char_inta_inta_inta(char a, int* b, int* c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_inta_inta_char(char a, int* b, int* c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_char_inta_inta_chara(char a, int* b, int* c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_inta_char(char a, int* b, char c) {
	global_value = ((int) a)+((int) b[2])+((int) c);
	return 1;
}
int func_char_inta_char_int(char a, int* b, char c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_char_inta_char_inta(char a, int* b, char c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_char_inta_char_char(char a, int* b, char c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_char_inta_char_chara(char a, int* b, char c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_char_inta_chara(char a, int* b, char* c) {
	global_value = ((int) a)+((int) b[2])+((int) c[2]);
	return 1;
}
int func_char_inta_chara_int(char a, int* b, char* c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_char_inta_chara_inta(char a, int* b, char* c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_inta_chara_char(char a, int* b, char* c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_char_inta_chara_chara(char a, int* b, char* c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_char_int_inta(char a, char b, int c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_char_char_int_chara(char a, char b, int c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_char_char_inta(char a, char b, int* c) {
	global_value = ((int) a)+((int) b)+((int) c[2]);
	return 1;
}
int func_char_char_inta_int(char a, char b, int* c, int d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_char_char_inta_inta(char a, char b, int* c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_char_inta_char(char a, char b, int* c, char d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_char_char_inta_chara(char a, char b, int* c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_char_char_inta(char a, char b, char c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_char_char_char_chara(char a, char b, char c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_char_char_chara(char a, char b, char* c) {
	global_value = ((int) a)+((int) b)+((int) c[2]);
	return 1;
}
int func_char_char_chara_int(char a, char b, char* c, int d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_char_char_chara_inta(char a, char b, char* c, int* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_char_chara_char(char a, char b, char* c, char d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_char_char_chara_chara(char a, char b, char* c, char* d) {
	global_value = ((int) a)+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_chara(char a, char* b) {
	global_value = ((int) a)+((int) b[2]);
	return 1;
}
int func_char_chara_int(char a, char* b, int c) {
	global_value = ((int) a)+((int) b[2])+((int) c);
	return 1;
}
int func_char_chara_int_int(char a, char* b, int c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_char_chara_int_inta(char a, char* b, int c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_char_chara_int_char(char a, char* b, int c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_char_chara_int_chara(char a, char* b, int c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_char_chara_inta(char a, char* b, int* c) {
	global_value = ((int) a)+((int) b[2])+((int) c[2]);
	return 1;
}
int func_char_chara_inta_int(char a, char* b, int* c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_char_chara_inta_inta(char a, char* b, int* c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_chara_inta_char(char a, char* b, int* c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_char_chara_inta_chara(char a, char* b, int* c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_chara_char(char a, char* b, char c) {
	global_value = ((int) a)+((int) b[2])+((int) c);
	return 1;
}
int func_char_chara_char_int(char a, char* b, char c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_char_chara_char_inta(char a, char* b, char c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_char_chara_char_char(char a, char* b, char c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_char_chara_char_chara(char a, char* b, char c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_char_chara_chara(char a, char* b, char* c) {
	global_value = ((int) a)+((int) b[2])+((int) c[2]);
	return 1;
}
int func_char_chara_chara_int(char a, char* b, char* c, int d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_char_chara_chara_inta(char a, char* b, char* c, int* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_char_chara_chara_char(char a, char* b, char* c, char d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_char_chara_chara_chara(char a, char* b, char* c, char* d) {
	global_value = ((int) a)+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara(char* a) {
	global_value = ((int) a[2]);
	return 1;
}
int func_chara_int(char* a, int b) {
	global_value = ((int) a[2])+((int) b);
	return 1;
}
int func_chara_int_int(char* a, int b, int c) {
	global_value = ((int) a[2])+((int) b)+((int) c);
	return 1;
}
int func_chara_int_int_int(char* a, int b, int c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_chara_int_int_inta(char* a, int b, int c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_int_int_char(char* a, int b, int c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_chara_int_int_chara(char* a, int b, int c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_int_inta(char* a, int b, int* c) {
	global_value = ((int) a[2])+((int) b)+((int) c[2]);
	return 1;
}
int func_chara_int_inta_int(char* a, int b, int* c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_chara_int_inta_inta(char* a, int b, int* c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_int_inta_char(char* a, int b, int* c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_chara_int_inta_chara(char* a, int b, int* c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_int_char(char* a, int b, char c) {
	global_value = ((int) a[2])+((int) b)+((int) c);
	return 1;
}
int func_chara_int_char_int(char* a, int b, char c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_chara_int_char_inta(char* a, int b, char c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_int_char_char(char* a, int b, char c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_chara_int_char_chara(char* a, int b, char c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_int_chara(char* a, int b, char* c) {
	global_value = ((int) a[2])+((int) b)+((int) c[2]);
	return 1;
}
int func_chara_int_chara_int(char* a, int b, char* c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_chara_int_chara_inta(char* a, int b, char* c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_int_chara_char(char* a, int b, char* c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_chara_int_chara_chara(char* a, int b, char* c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_inta(char* a, int* b) {
	global_value = ((int) a[2])+((int) b[2]);
	return 1;
}
int func_chara_inta_int(char* a, int* b, int c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c);
	return 1;
}
int func_chara_inta_int_int(char* a, int* b, int c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_chara_inta_int_inta(char* a, int* b, int c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_inta_int_char(char* a, int* b, int c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_chara_inta_int_chara(char* a, int* b, int c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_inta_inta(char* a, int* b, int* c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2]);
	return 1;
}
int func_chara_inta_inta_int(char* a, int* b, int* c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_chara_inta_inta_inta(char* a, int* b, int* c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_inta_inta_char(char* a, int* b, int* c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_chara_inta_inta_chara(char* a, int* b, int* c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_inta_char(char* a, int* b, char c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c);
	return 1;
}
int func_chara_inta_char_int(char* a, int* b, char c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_chara_inta_char_inta(char* a, int* b, char c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_inta_char_char(char* a, int* b, char c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_chara_inta_char_chara(char* a, int* b, char c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_inta_chara(char* a, int* b, char* c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2]);
	return 1;
}
int func_chara_inta_chara_int(char* a, int* b, char* c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_chara_inta_chara_inta(char* a, int* b, char* c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_inta_chara_char(char* a, int* b, char* c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_chara_inta_chara_chara(char* a, int* b, char* c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_char(char* a, char b) {
	global_value = ((int) a[2])+((int) b);
	return 1;
}
int func_chara_char_int(char* a, char b, int c) {
	global_value = ((int) a[2])+((int) b)+((int) c);
	return 1;
}
int func_chara_char_int_int(char* a, char b, int c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_chara_char_int_inta(char* a, char b, int c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_char_int_char(char* a, char b, int c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_chara_char_int_chara(char* a, char b, int c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_char_inta(char* a, char b, int* c) {
	global_value = ((int) a[2])+((int) b)+((int) c[2]);
	return 1;
}
int func_chara_char_inta_int(char* a, char b, int* c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_chara_char_inta_inta(char* a, char b, int* c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_char_inta_char(char* a, char b, int* c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_chara_char_inta_chara(char* a, char b, int* c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_char_char(char* a, char b, char c) {
	global_value = ((int) a[2])+((int) b)+((int) c);
	return 1;
}
int func_chara_char_char_int(char* a, char b, char c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_chara_char_char_inta(char* a, char b, char c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_char_char_char(char* a, char b, char c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d);
	return 1;
}
int func_chara_char_char_chara(char* a, char b, char c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_char_chara(char* a, char b, char* c) {
	global_value = ((int) a[2])+((int) b)+((int) c[2]);
	return 1;
}
int func_chara_char_chara_int(char* a, char b, char* c, int d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_chara_char_chara_inta(char* a, char b, char* c, int* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_char_chara_char(char* a, char b, char* c, char d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d);
	return 1;
}
int func_chara_char_chara_chara(char* a, char b, char* c, char* d) {
	global_value = ((int) a[2])+((int) b)+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_chara(char* a, char* b) {
	global_value = ((int) a[2])+((int) b[2]);
	return 1;
}
int func_chara_chara_int(char* a, char* b, int c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c);
	return 1;
}
int func_chara_chara_int_int(char* a, char* b, int c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_chara_chara_int_inta(char* a, char* b, int c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_chara_int_char(char* a, char* b, int c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_chara_chara_int_chara(char* a, char* b, int c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_chara_inta(char* a, char* b, int* c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2]);
	return 1;
}
int func_chara_chara_inta_int(char* a, char* b, int* c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_chara_chara_inta_inta(char* a, char* b, int* c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_chara_inta_char(char* a, char* b, int* c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_chara_chara_inta_chara(char* a, char* b, int* c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_chara_char(char* a, char* b, char c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c);
	return 1;
}
int func_chara_chara_char_int(char* a, char* b, char c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_chara_chara_char_inta(char* a, char* b, char c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_chara_char_char(char* a, char* b, char c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d);
	return 1;
}
int func_chara_chara_char_chara(char* a, char* b, char c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c)+((int) d[2]);
	return 1;
}
int func_chara_chara_chara(char* a, char* b, char* c) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2]);
	return 1;
}
int func_chara_chara_chara_int(char* a, char* b, char* c, int d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_chara_chara_chara_inta(char* a, char* b, char* c, int* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}
int func_chara_chara_chara_char(char* a, char* b, char* c, char d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d);
	return 1;
}
int func_chara_chara_chara_chara(char* a, char* b, char* c, char* d) {
	global_value = ((int) a[2])+((int) b[2])+((int) c[2])+((int) d[2]);
	return 1;
}

int execute_expose() {
	if (!rfc_expose("int func_int_int_int_inta(int,int,int,int*)", func_int_int_int_inta)) {
		printf("Test failed: The 'func_int_int_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_int_chara(int,int,int,char*)", func_int_int_int_chara)) {
		printf("Test failed: The 'func_int_int_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_inta(int,int,int*)", func_int_int_inta)) {
		printf("Test failed: The 'func_int_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_inta_int(int,int,int*,int)", func_int_int_inta_int)) {
		printf("Test failed: The 'func_int_int_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_inta_inta(int,int,int*,int*)", func_int_int_inta_inta)) {
		printf("Test failed: The 'func_int_int_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_inta_char(int,int,int*,char)", func_int_int_inta_char)) {
		printf("Test failed: The 'func_int_int_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_inta_chara(int,int,int*,char*)", func_int_int_inta_chara)) {
		printf("Test failed: The 'func_int_int_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_char_inta(int,int,char,int*)", func_int_int_char_inta)) {
		printf("Test failed: The 'func_int_int_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_char_chara(int,int,char,char*)", func_int_int_char_chara)) {
		printf("Test failed: The 'func_int_int_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_chara(int,int,char*)", func_int_int_chara)) {
		printf("Test failed: The 'func_int_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_chara_int(int,int,char*,int)", func_int_int_chara_int)) {
		printf("Test failed: The 'func_int_int_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_chara_inta(int,int,char*,int*)", func_int_int_chara_inta)) {
		printf("Test failed: The 'func_int_int_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_chara_char(int,int,char*,char)", func_int_int_chara_char)) {
		printf("Test failed: The 'func_int_int_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_int_chara_chara(int,int,char*,char*)", func_int_int_chara_chara)) {
		printf("Test failed: The 'func_int_int_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta(int,int*)", func_int_inta)) {
		printf("Test failed: The 'func_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_int(int,int*,int)", func_int_inta_int)) {
		printf("Test failed: The 'func_int_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_int_int(int,int*,int,int)", func_int_inta_int_int)) {
		printf("Test failed: The 'func_int_inta_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_int_inta(int,int*,int,int*)", func_int_inta_int_inta)) {
		printf("Test failed: The 'func_int_inta_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_int_char(int,int*,int,char)", func_int_inta_int_char)) {
		printf("Test failed: The 'func_int_inta_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_int_chara(int,int*,int,char*)", func_int_inta_int_chara)) {
		printf("Test failed: The 'func_int_inta_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_inta(int,int*,int*)", func_int_inta_inta)) {
		printf("Test failed: The 'func_int_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_inta_int(int,int*,int*,int)", func_int_inta_inta_int)) {
		printf("Test failed: The 'func_int_inta_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_inta_inta(int,int*,int*,int*)", func_int_inta_inta_inta)) {
		printf("Test failed: The 'func_int_inta_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_inta_char(int,int*,int*,char)", func_int_inta_inta_char)) {
		printf("Test failed: The 'func_int_inta_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_inta_chara(int,int*,int*,char*)", func_int_inta_inta_chara)) {
		printf("Test failed: The 'func_int_inta_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_char(int,int*,char)", func_int_inta_char)) {
		printf("Test failed: The 'func_int_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_char_int(int,int*,char,int)", func_int_inta_char_int)) {
		printf("Test failed: The 'func_int_inta_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_char_inta(int,int*,char,int*)", func_int_inta_char_inta)) {
		printf("Test failed: The 'func_int_inta_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_char_char(int,int*,char,char)", func_int_inta_char_char)) {
		printf("Test failed: The 'func_int_inta_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_char_chara(int,int*,char,char*)", func_int_inta_char_chara)) {
		printf("Test failed: The 'func_int_inta_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_chara(int,int*,char*)", func_int_inta_chara)) {
		printf("Test failed: The 'func_int_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_chara_int(int,int*,char*,int)", func_int_inta_chara_int)) {
		printf("Test failed: The 'func_int_inta_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_chara_inta(int,int*,char*,int*)", func_int_inta_chara_inta)) {
		printf("Test failed: The 'func_int_inta_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_chara_char(int,int*,char*,char)", func_int_inta_chara_char)) {
		printf("Test failed: The 'func_int_inta_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_inta_chara_chara(int,int*,char*,char*)", func_int_inta_chara_chara)) {
		printf("Test failed: The 'func_int_inta_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_int_inta(int,char,int,int*)", func_int_char_int_inta)) {
		printf("Test failed: The 'func_int_char_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_int_chara(int,char,int,char*)", func_int_char_int_chara)) {
		printf("Test failed: The 'func_int_char_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_inta(int,char,int*)", func_int_char_inta)) {
		printf("Test failed: The 'func_int_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_inta_int(int,char,int*,int)", func_int_char_inta_int)) {
		printf("Test failed: The 'func_int_char_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_inta_inta(int,char,int*,int*)", func_int_char_inta_inta)) {
		printf("Test failed: The 'func_int_char_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_inta_char(int,char,int*,char)", func_int_char_inta_char)) {
		printf("Test failed: The 'func_int_char_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_inta_chara(int,char,int*,char*)", func_int_char_inta_chara)) {
		printf("Test failed: The 'func_int_char_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_char_inta(int,char,char,int*)", func_int_char_char_inta)) {
		printf("Test failed: The 'func_int_char_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_char_chara(int,char,char,char*)", func_int_char_char_chara)) {
		printf("Test failed: The 'func_int_char_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_chara(int,char,char*)", func_int_char_chara)) {
		printf("Test failed: The 'func_int_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_chara_int(int,char,char*,int)", func_int_char_chara_int)) {
		printf("Test failed: The 'func_int_char_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_chara_inta(int,char,char*,int*)", func_int_char_chara_inta)) {
		printf("Test failed: The 'func_int_char_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_chara_char(int,char,char*,char)", func_int_char_chara_char)) {
		printf("Test failed: The 'func_int_char_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_char_chara_chara(int,char,char*,char*)", func_int_char_chara_chara)) {
		printf("Test failed: The 'func_int_char_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara(int,char*)", func_int_chara)) {
		printf("Test failed: The 'func_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_int(int,char*,int)", func_int_chara_int)) {
		printf("Test failed: The 'func_int_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_int_int(int,char*,int,int)", func_int_chara_int_int)) {
		printf("Test failed: The 'func_int_chara_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_int_inta(int,char*,int,int*)", func_int_chara_int_inta)) {
		printf("Test failed: The 'func_int_chara_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_int_char(int,char*,int,char)", func_int_chara_int_char)) {
		printf("Test failed: The 'func_int_chara_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_int_chara(int,char*,int,char*)", func_int_chara_int_chara)) {
		printf("Test failed: The 'func_int_chara_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_inta(int,char*,int*)", func_int_chara_inta)) {
		printf("Test failed: The 'func_int_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_inta_int(int,char*,int*,int)", func_int_chara_inta_int)) {
		printf("Test failed: The 'func_int_chara_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_inta_inta(int,char*,int*,int*)", func_int_chara_inta_inta)) {
		printf("Test failed: The 'func_int_chara_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_inta_char(int,char*,int*,char)", func_int_chara_inta_char)) {
		printf("Test failed: The 'func_int_chara_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_inta_chara(int,char*,int*,char*)", func_int_chara_inta_chara)) {
		printf("Test failed: The 'func_int_chara_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_char(int,char*,char)", func_int_chara_char)) {
		printf("Test failed: The 'func_int_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_char_int(int,char*,char,int)", func_int_chara_char_int)) {
		printf("Test failed: The 'func_int_chara_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_char_inta(int,char*,char,int*)", func_int_chara_char_inta)) {
		printf("Test failed: The 'func_int_chara_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_char_char(int,char*,char,char)", func_int_chara_char_char)) {
		printf("Test failed: The 'func_int_chara_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_char_chara(int,char*,char,char*)", func_int_chara_char_chara)) {
		printf("Test failed: The 'func_int_chara_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_chara(int,char*,char*)", func_int_chara_chara)) {
		printf("Test failed: The 'func_int_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_chara_int(int,char*,char*,int)", func_int_chara_chara_int)) {
		printf("Test failed: The 'func_int_chara_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_chara_inta(int,char*,char*,int*)", func_int_chara_chara_inta)) {
		printf("Test failed: The 'func_int_chara_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_chara_char(int,char*,char*,char)", func_int_chara_chara_char)) {
		printf("Test failed: The 'func_int_chara_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_int_chara_chara_chara(int,char*,char*,char*)", func_int_chara_chara_chara)) {
		printf("Test failed: The 'func_int_chara_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta(int*)", func_inta)) {
		printf("Test failed: The 'func_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int(int*,int)", func_inta_int)) {
		printf("Test failed: The 'func_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_int(int*,int,int)", func_inta_int_int)) {
		printf("Test failed: The 'func_inta_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_int_int(int*,int,int,int)", func_inta_int_int_int)) {
		printf("Test failed: The 'func_inta_int_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_int_inta(int*,int,int,int*)", func_inta_int_int_inta)) {
		printf("Test failed: The 'func_inta_int_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_int_char(int*,int,int,char)", func_inta_int_int_char)) {
		printf("Test failed: The 'func_inta_int_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_int_chara(int*,int,int,char*)", func_inta_int_int_chara)) {
		printf("Test failed: The 'func_inta_int_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_inta(int*,int,int*)", func_inta_int_inta)) {
		printf("Test failed: The 'func_inta_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_inta_int(int*,int,int*,int)", func_inta_int_inta_int)) {
		printf("Test failed: The 'func_inta_int_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_inta_inta(int*,int,int*,int*)", func_inta_int_inta_inta)) {
		printf("Test failed: The 'func_inta_int_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_inta_char(int*,int,int*,char)", func_inta_int_inta_char)) {
		printf("Test failed: The 'func_inta_int_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_inta_chara(int*,int,int*,char*)", func_inta_int_inta_chara)) {
		printf("Test failed: The 'func_inta_int_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_char(int*,int,char)", func_inta_int_char)) {
		printf("Test failed: The 'func_inta_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_char_int(int*,int,char,int)", func_inta_int_char_int)) {
		printf("Test failed: The 'func_inta_int_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_char_inta(int*,int,char,int*)", func_inta_int_char_inta)) {
		printf("Test failed: The 'func_inta_int_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_char_char(int*,int,char,char)", func_inta_int_char_char)) {
		printf("Test failed: The 'func_inta_int_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_char_chara(int*,int,char,char*)", func_inta_int_char_chara)) {
		printf("Test failed: The 'func_inta_int_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_chara(int*,int,char*)", func_inta_int_chara)) {
		printf("Test failed: The 'func_inta_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_chara_int(int*,int,char*,int)", func_inta_int_chara_int)) {
		printf("Test failed: The 'func_inta_int_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_chara_inta(int*,int,char*,int*)", func_inta_int_chara_inta)) {
		printf("Test failed: The 'func_inta_int_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_chara_char(int*,int,char*,char)", func_inta_int_chara_char)) {
		printf("Test failed: The 'func_inta_int_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_int_chara_chara(int*,int,char*,char*)", func_inta_int_chara_chara)) {
		printf("Test failed: The 'func_inta_int_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta(int*,int*)", func_inta_inta)) {
		printf("Test failed: The 'func_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_int(int*,int*,int)", func_inta_inta_int)) {
		printf("Test failed: The 'func_inta_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_int_int(int*,int*,int,int)", func_inta_inta_int_int)) {
		printf("Test failed: The 'func_inta_inta_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_int_inta(int*,int*,int,int*)", func_inta_inta_int_inta)) {
		printf("Test failed: The 'func_inta_inta_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_int_char(int*,int*,int,char)", func_inta_inta_int_char)) {
		printf("Test failed: The 'func_inta_inta_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_int_chara(int*,int*,int,char*)", func_inta_inta_int_chara)) {
		printf("Test failed: The 'func_inta_inta_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_inta(int*,int*,int*)", func_inta_inta_inta)) {
		printf("Test failed: The 'func_inta_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_inta_int(int*,int*,int*,int)", func_inta_inta_inta_int)) {
		printf("Test failed: The 'func_inta_inta_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_inta_inta(int*,int*,int*,int*)", func_inta_inta_inta_inta)) {
		printf("Test failed: The 'func_inta_inta_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_inta_char(int*,int*,int*,char)", func_inta_inta_inta_char)) {
		printf("Test failed: The 'func_inta_inta_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_inta_chara(int*,int*,int*,char*)", func_inta_inta_inta_chara)) {
		printf("Test failed: The 'func_inta_inta_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_char(int*,int*,char)", func_inta_inta_char)) {
		printf("Test failed: The 'func_inta_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_char_int(int*,int*,char,int)", func_inta_inta_char_int)) {
		printf("Test failed: The 'func_inta_inta_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_char_inta(int*,int*,char,int*)", func_inta_inta_char_inta)) {
		printf("Test failed: The 'func_inta_inta_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_char_char(int*,int*,char,char)", func_inta_inta_char_char)) {
		printf("Test failed: The 'func_inta_inta_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_char_chara(int*,int*,char,char*)", func_inta_inta_char_chara)) {
		printf("Test failed: The 'func_inta_inta_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_chara(int*,int*,char*)", func_inta_inta_chara)) {
		printf("Test failed: The 'func_inta_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_chara_int(int*,int*,char*,int)", func_inta_inta_chara_int)) {
		printf("Test failed: The 'func_inta_inta_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_chara_inta(int*,int*,char*,int*)", func_inta_inta_chara_inta)) {
		printf("Test failed: The 'func_inta_inta_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_chara_char(int*,int*,char*,char)", func_inta_inta_chara_char)) {
		printf("Test failed: The 'func_inta_inta_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_inta_chara_chara(int*,int*,char*,char*)", func_inta_inta_chara_chara)) {
		printf("Test failed: The 'func_inta_inta_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char(int*,char)", func_inta_char)) {
		printf("Test failed: The 'func_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_int(int*,char,int)", func_inta_char_int)) {
		printf("Test failed: The 'func_inta_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_int_int(int*,char,int,int)", func_inta_char_int_int)) {
		printf("Test failed: The 'func_inta_char_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_int_inta(int*,char,int,int*)", func_inta_char_int_inta)) {
		printf("Test failed: The 'func_inta_char_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_int_char(int*,char,int,char)", func_inta_char_int_char)) {
		printf("Test failed: The 'func_inta_char_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_int_chara(int*,char,int,char*)", func_inta_char_int_chara)) {
		printf("Test failed: The 'func_inta_char_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_inta(int*,char,int*)", func_inta_char_inta)) {
		printf("Test failed: The 'func_inta_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_inta_int(int*,char,int*,int)", func_inta_char_inta_int)) {
		printf("Test failed: The 'func_inta_char_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_inta_inta(int*,char,int*,int*)", func_inta_char_inta_inta)) {
		printf("Test failed: The 'func_inta_char_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_inta_char(int*,char,int*,char)", func_inta_char_inta_char)) {
		printf("Test failed: The 'func_inta_char_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_inta_chara(int*,char,int*,char*)", func_inta_char_inta_chara)) {
		printf("Test failed: The 'func_inta_char_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_char(int*,char,char)", func_inta_char_char)) {
		printf("Test failed: The 'func_inta_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_char_int(int*,char,char,int)", func_inta_char_char_int)) {
		printf("Test failed: The 'func_inta_char_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_char_inta(int*,char,char,int*)", func_inta_char_char_inta)) {
		printf("Test failed: The 'func_inta_char_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_char_char(int*,char,char,char)", func_inta_char_char_char)) {
		printf("Test failed: The 'func_inta_char_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_char_chara(int*,char,char,char*)", func_inta_char_char_chara)) {
		printf("Test failed: The 'func_inta_char_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_chara(int*,char,char*)", func_inta_char_chara)) {
		printf("Test failed: The 'func_inta_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_chara_int(int*,char,char*,int)", func_inta_char_chara_int)) {
		printf("Test failed: The 'func_inta_char_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_chara_inta(int*,char,char*,int*)", func_inta_char_chara_inta)) {
		printf("Test failed: The 'func_inta_char_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_chara_char(int*,char,char*,char)", func_inta_char_chara_char)) {
		printf("Test failed: The 'func_inta_char_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_char_chara_chara(int*,char,char*,char*)", func_inta_char_chara_chara)) {
		printf("Test failed: The 'func_inta_char_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara(int*,char*)", func_inta_chara)) {
		printf("Test failed: The 'func_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_int(int*,char*,int)", func_inta_chara_int)) {
		printf("Test failed: The 'func_inta_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_int_int(int*,char*,int,int)", func_inta_chara_int_int)) {
		printf("Test failed: The 'func_inta_chara_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_int_inta(int*,char*,int,int*)", func_inta_chara_int_inta)) {
		printf("Test failed: The 'func_inta_chara_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_int_char(int*,char*,int,char)", func_inta_chara_int_char)) {
		printf("Test failed: The 'func_inta_chara_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_int_chara(int*,char*,int,char*)", func_inta_chara_int_chara)) {
		printf("Test failed: The 'func_inta_chara_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_inta(int*,char*,int*)", func_inta_chara_inta)) {
		printf("Test failed: The 'func_inta_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_inta_int(int*,char*,int*,int)", func_inta_chara_inta_int)) {
		printf("Test failed: The 'func_inta_chara_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_inta_inta(int*,char*,int*,int*)", func_inta_chara_inta_inta)) {
		printf("Test failed: The 'func_inta_chara_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_inta_char(int*,char*,int*,char)", func_inta_chara_inta_char)) {
		printf("Test failed: The 'func_inta_chara_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_inta_chara(int*,char*,int*,char*)", func_inta_chara_inta_chara)) {
		printf("Test failed: The 'func_inta_chara_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_char(int*,char*,char)", func_inta_chara_char)) {
		printf("Test failed: The 'func_inta_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_char_int(int*,char*,char,int)", func_inta_chara_char_int)) {
		printf("Test failed: The 'func_inta_chara_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_char_inta(int*,char*,char,int*)", func_inta_chara_char_inta)) {
		printf("Test failed: The 'func_inta_chara_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_char_char(int*,char*,char,char)", func_inta_chara_char_char)) {
		printf("Test failed: The 'func_inta_chara_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_char_chara(int*,char*,char,char*)", func_inta_chara_char_chara)) {
		printf("Test failed: The 'func_inta_chara_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_chara(int*,char*,char*)", func_inta_chara_chara)) {
		printf("Test failed: The 'func_inta_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_chara_int(int*,char*,char*,int)", func_inta_chara_chara_int)) {
		printf("Test failed: The 'func_inta_chara_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_chara_inta(int*,char*,char*,int*)", func_inta_chara_chara_inta)) {
		printf("Test failed: The 'func_inta_chara_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_chara_char(int*,char*,char*,char)", func_inta_chara_chara_char)) {
		printf("Test failed: The 'func_inta_chara_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_inta_chara_chara_chara(int*,char*,char*,char*)", func_inta_chara_chara_chara)) {
		printf("Test failed: The 'func_inta_chara_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_int_inta(char,int,int,int*)", func_char_int_int_inta)) {
		printf("Test failed: The 'func_char_int_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_int_chara(char,int,int,char*)", func_char_int_int_chara)) {
		printf("Test failed: The 'func_char_int_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_inta(char,int,int*)", func_char_int_inta)) {
		printf("Test failed: The 'func_char_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_inta_int(char,int,int*,int)", func_char_int_inta_int)) {
		printf("Test failed: The 'func_char_int_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_inta_inta(char,int,int*,int*)", func_char_int_inta_inta)) {
		printf("Test failed: The 'func_char_int_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_inta_char(char,int,int*,char)", func_char_int_inta_char)) {
		printf("Test failed: The 'func_char_int_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_inta_chara(char,int,int*,char*)", func_char_int_inta_chara)) {
		printf("Test failed: The 'func_char_int_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_char_inta(char,int,char,int*)", func_char_int_char_inta)) {
		printf("Test failed: The 'func_char_int_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_char_chara(char,int,char,char*)", func_char_int_char_chara)) {
		printf("Test failed: The 'func_char_int_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_chara(char,int,char*)", func_char_int_chara)) {
		printf("Test failed: The 'func_char_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_chara_int(char,int,char*,int)", func_char_int_chara_int)) {
		printf("Test failed: The 'func_char_int_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_chara_inta(char,int,char*,int*)", func_char_int_chara_inta)) {
		printf("Test failed: The 'func_char_int_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_chara_char(char,int,char*,char)", func_char_int_chara_char)) {
		printf("Test failed: The 'func_char_int_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_int_chara_chara(char,int,char*,char*)", func_char_int_chara_chara)) {
		printf("Test failed: The 'func_char_int_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta(char,int*)", func_char_inta)) {
		printf("Test failed: The 'func_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_int(char,int*,int)", func_char_inta_int)) {
		printf("Test failed: The 'func_char_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_int_int(char,int*,int,int)", func_char_inta_int_int)) {
		printf("Test failed: The 'func_char_inta_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_int_inta(char,int*,int,int*)", func_char_inta_int_inta)) {
		printf("Test failed: The 'func_char_inta_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_int_char(char,int*,int,char)", func_char_inta_int_char)) {
		printf("Test failed: The 'func_char_inta_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_int_chara(char,int*,int,char*)", func_char_inta_int_chara)) {
		printf("Test failed: The 'func_char_inta_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_inta(char,int*,int*)", func_char_inta_inta)) {
		printf("Test failed: The 'func_char_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_inta_int(char,int*,int*,int)", func_char_inta_inta_int)) {
		printf("Test failed: The 'func_char_inta_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_inta_inta(char,int*,int*,int*)", func_char_inta_inta_inta)) {
		printf("Test failed: The 'func_char_inta_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_inta_char(char,int*,int*,char)", func_char_inta_inta_char)) {
		printf("Test failed: The 'func_char_inta_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_inta_chara(char,int*,int*,char*)", func_char_inta_inta_chara)) {
		printf("Test failed: The 'func_char_inta_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_char(char,int*,char)", func_char_inta_char)) {
		printf("Test failed: The 'func_char_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_char_int(char,int*,char,int)", func_char_inta_char_int)) {
		printf("Test failed: The 'func_char_inta_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_char_inta(char,int*,char,int*)", func_char_inta_char_inta)) {
		printf("Test failed: The 'func_char_inta_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_char_char(char,int*,char,char)", func_char_inta_char_char)) {
		printf("Test failed: The 'func_char_inta_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_char_chara(char,int*,char,char*)", func_char_inta_char_chara)) {
		printf("Test failed: The 'func_char_inta_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_chara(char,int*,char*)", func_char_inta_chara)) {
		printf("Test failed: The 'func_char_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_chara_int(char,int*,char*,int)", func_char_inta_chara_int)) {
		printf("Test failed: The 'func_char_inta_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_chara_inta(char,int*,char*,int*)", func_char_inta_chara_inta)) {
		printf("Test failed: The 'func_char_inta_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_chara_char(char,int*,char*,char)", func_char_inta_chara_char)) {
		printf("Test failed: The 'func_char_inta_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_inta_chara_chara(char,int*,char*,char*)", func_char_inta_chara_chara)) {
		printf("Test failed: The 'func_char_inta_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_int_inta(char,char,int,int*)", func_char_char_int_inta)) {
		printf("Test failed: The 'func_char_char_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_int_chara(char,char,int,char*)", func_char_char_int_chara)) {
		printf("Test failed: The 'func_char_char_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_inta(char,char,int*)", func_char_char_inta)) {
		printf("Test failed: The 'func_char_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_inta_int(char,char,int*,int)", func_char_char_inta_int)) {
		printf("Test failed: The 'func_char_char_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_inta_inta(char,char,int*,int*)", func_char_char_inta_inta)) {
		printf("Test failed: The 'func_char_char_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_inta_char(char,char,int*,char)", func_char_char_inta_char)) {
		printf("Test failed: The 'func_char_char_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_inta_chara(char,char,int*,char*)", func_char_char_inta_chara)) {
		printf("Test failed: The 'func_char_char_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_char_inta(char,char,char,int*)", func_char_char_char_inta)) {
		printf("Test failed: The 'func_char_char_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_char_chara(char,char,char,char*)", func_char_char_char_chara)) {
		printf("Test failed: The 'func_char_char_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_chara(char,char,char*)", func_char_char_chara)) {
		printf("Test failed: The 'func_char_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_chara_int(char,char,char*,int)", func_char_char_chara_int)) {
		printf("Test failed: The 'func_char_char_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_chara_inta(char,char,char*,int*)", func_char_char_chara_inta)) {
		printf("Test failed: The 'func_char_char_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_chara_char(char,char,char*,char)", func_char_char_chara_char)) {
		printf("Test failed: The 'func_char_char_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_char_chara_chara(char,char,char*,char*)", func_char_char_chara_chara)) {
		printf("Test failed: The 'func_char_char_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara(char,char*)", func_char_chara)) {
		printf("Test failed: The 'func_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_int(char,char*,int)", func_char_chara_int)) {
		printf("Test failed: The 'func_char_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_int_int(char,char*,int,int)", func_char_chara_int_int)) {
		printf("Test failed: The 'func_char_chara_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_int_inta(char,char*,int,int*)", func_char_chara_int_inta)) {
		printf("Test failed: The 'func_char_chara_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_int_char(char,char*,int,char)", func_char_chara_int_char)) {
		printf("Test failed: The 'func_char_chara_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_int_chara(char,char*,int,char*)", func_char_chara_int_chara)) {
		printf("Test failed: The 'func_char_chara_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_inta(char,char*,int*)", func_char_chara_inta)) {
		printf("Test failed: The 'func_char_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_inta_int(char,char*,int*,int)", func_char_chara_inta_int)) {
		printf("Test failed: The 'func_char_chara_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_inta_inta(char,char*,int*,int*)", func_char_chara_inta_inta)) {
		printf("Test failed: The 'func_char_chara_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_inta_char(char,char*,int*,char)", func_char_chara_inta_char)) {
		printf("Test failed: The 'func_char_chara_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_inta_chara(char,char*,int*,char*)", func_char_chara_inta_chara)) {
		printf("Test failed: The 'func_char_chara_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_char(char,char*,char)", func_char_chara_char)) {
		printf("Test failed: The 'func_char_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_char_int(char,char*,char,int)", func_char_chara_char_int)) {
		printf("Test failed: The 'func_char_chara_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_char_inta(char,char*,char,int*)", func_char_chara_char_inta)) {
		printf("Test failed: The 'func_char_chara_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_char_char(char,char*,char,char)", func_char_chara_char_char)) {
		printf("Test failed: The 'func_char_chara_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_char_chara(char,char*,char,char*)", func_char_chara_char_chara)) {
		printf("Test failed: The 'func_char_chara_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_chara(char,char*,char*)", func_char_chara_chara)) {
		printf("Test failed: The 'func_char_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_chara_int(char,char*,char*,int)", func_char_chara_chara_int)) {
		printf("Test failed: The 'func_char_chara_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_chara_inta(char,char*,char*,int*)", func_char_chara_chara_inta)) {
		printf("Test failed: The 'func_char_chara_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_chara_char(char,char*,char*,char)", func_char_chara_chara_char)) {
		printf("Test failed: The 'func_char_chara_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_char_chara_chara_chara(char,char*,char*,char*)", func_char_chara_chara_chara)) {
		printf("Test failed: The 'func_char_chara_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara(char*)", func_chara)) {
		printf("Test failed: The 'func_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int(char*,int)", func_chara_int)) {
		printf("Test failed: The 'func_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_int(char*,int,int)", func_chara_int_int)) {
		printf("Test failed: The 'func_chara_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_int_int(char*,int,int,int)", func_chara_int_int_int)) {
		printf("Test failed: The 'func_chara_int_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_int_inta(char*,int,int,int*)", func_chara_int_int_inta)) {
		printf("Test failed: The 'func_chara_int_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_int_char(char*,int,int,char)", func_chara_int_int_char)) {
		printf("Test failed: The 'func_chara_int_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_int_chara(char*,int,int,char*)", func_chara_int_int_chara)) {
		printf("Test failed: The 'func_chara_int_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_inta(char*,int,int*)", func_chara_int_inta)) {
		printf("Test failed: The 'func_chara_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_inta_int(char*,int,int*,int)", func_chara_int_inta_int)) {
		printf("Test failed: The 'func_chara_int_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_inta_inta(char*,int,int*,int*)", func_chara_int_inta_inta)) {
		printf("Test failed: The 'func_chara_int_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_inta_char(char*,int,int*,char)", func_chara_int_inta_char)) {
		printf("Test failed: The 'func_chara_int_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_inta_chara(char*,int,int*,char*)", func_chara_int_inta_chara)) {
		printf("Test failed: The 'func_chara_int_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_char(char*,int,char)", func_chara_int_char)) {
		printf("Test failed: The 'func_chara_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_char_int(char*,int,char,int)", func_chara_int_char_int)) {
		printf("Test failed: The 'func_chara_int_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_char_inta(char*,int,char,int*)", func_chara_int_char_inta)) {
		printf("Test failed: The 'func_chara_int_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_char_char(char*,int,char,char)", func_chara_int_char_char)) {
		printf("Test failed: The 'func_chara_int_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_char_chara(char*,int,char,char*)", func_chara_int_char_chara)) {
		printf("Test failed: The 'func_chara_int_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_chara(char*,int,char*)", func_chara_int_chara)) {
		printf("Test failed: The 'func_chara_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_chara_int(char*,int,char*,int)", func_chara_int_chara_int)) {
		printf("Test failed: The 'func_chara_int_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_chara_inta(char*,int,char*,int*)", func_chara_int_chara_inta)) {
		printf("Test failed: The 'func_chara_int_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_chara_char(char*,int,char*,char)", func_chara_int_chara_char)) {
		printf("Test failed: The 'func_chara_int_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_int_chara_chara(char*,int,char*,char*)", func_chara_int_chara_chara)) {
		printf("Test failed: The 'func_chara_int_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta(char*,int*)", func_chara_inta)) {
		printf("Test failed: The 'func_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_int(char*,int*,int)", func_chara_inta_int)) {
		printf("Test failed: The 'func_chara_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_int_int(char*,int*,int,int)", func_chara_inta_int_int)) {
		printf("Test failed: The 'func_chara_inta_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_int_inta(char*,int*,int,int*)", func_chara_inta_int_inta)) {
		printf("Test failed: The 'func_chara_inta_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_int_char(char*,int*,int,char)", func_chara_inta_int_char)) {
		printf("Test failed: The 'func_chara_inta_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_int_chara(char*,int*,int,char*)", func_chara_inta_int_chara)) {
		printf("Test failed: The 'func_chara_inta_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_inta(char*,int*,int*)", func_chara_inta_inta)) {
		printf("Test failed: The 'func_chara_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_inta_int(char*,int*,int*,int)", func_chara_inta_inta_int)) {
		printf("Test failed: The 'func_chara_inta_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_inta_inta(char*,int*,int*,int*)", func_chara_inta_inta_inta)) {
		printf("Test failed: The 'func_chara_inta_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_inta_char(char*,int*,int*,char)", func_chara_inta_inta_char)) {
		printf("Test failed: The 'func_chara_inta_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_inta_chara(char*,int*,int*,char*)", func_chara_inta_inta_chara)) {
		printf("Test failed: The 'func_chara_inta_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_char(char*,int*,char)", func_chara_inta_char)) {
		printf("Test failed: The 'func_chara_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_char_int(char*,int*,char,int)", func_chara_inta_char_int)) {
		printf("Test failed: The 'func_chara_inta_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_char_inta(char*,int*,char,int*)", func_chara_inta_char_inta)) {
		printf("Test failed: The 'func_chara_inta_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_char_char(char*,int*,char,char)", func_chara_inta_char_char)) {
		printf("Test failed: The 'func_chara_inta_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_char_chara(char*,int*,char,char*)", func_chara_inta_char_chara)) {
		printf("Test failed: The 'func_chara_inta_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_chara(char*,int*,char*)", func_chara_inta_chara)) {
		printf("Test failed: The 'func_chara_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_chara_int(char*,int*,char*,int)", func_chara_inta_chara_int)) {
		printf("Test failed: The 'func_chara_inta_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_chara_inta(char*,int*,char*,int*)", func_chara_inta_chara_inta)) {
		printf("Test failed: The 'func_chara_inta_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_chara_char(char*,int*,char*,char)", func_chara_inta_chara_char)) {
		printf("Test failed: The 'func_chara_inta_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_inta_chara_chara(char*,int*,char*,char*)", func_chara_inta_chara_chara)) {
		printf("Test failed: The 'func_chara_inta_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char(char*,char)", func_chara_char)) {
		printf("Test failed: The 'func_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_int(char*,char,int)", func_chara_char_int)) {
		printf("Test failed: The 'func_chara_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_int_int(char*,char,int,int)", func_chara_char_int_int)) {
		printf("Test failed: The 'func_chara_char_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_int_inta(char*,char,int,int*)", func_chara_char_int_inta)) {
		printf("Test failed: The 'func_chara_char_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_int_char(char*,char,int,char)", func_chara_char_int_char)) {
		printf("Test failed: The 'func_chara_char_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_int_chara(char*,char,int,char*)", func_chara_char_int_chara)) {
		printf("Test failed: The 'func_chara_char_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_inta(char*,char,int*)", func_chara_char_inta)) {
		printf("Test failed: The 'func_chara_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_inta_int(char*,char,int*,int)", func_chara_char_inta_int)) {
		printf("Test failed: The 'func_chara_char_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_inta_inta(char*,char,int*,int*)", func_chara_char_inta_inta)) {
		printf("Test failed: The 'func_chara_char_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_inta_char(char*,char,int*,char)", func_chara_char_inta_char)) {
		printf("Test failed: The 'func_chara_char_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_inta_chara(char*,char,int*,char*)", func_chara_char_inta_chara)) {
		printf("Test failed: The 'func_chara_char_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_char(char*,char,char)", func_chara_char_char)) {
		printf("Test failed: The 'func_chara_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_char_int(char*,char,char,int)", func_chara_char_char_int)) {
		printf("Test failed: The 'func_chara_char_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_char_inta(char*,char,char,int*)", func_chara_char_char_inta)) {
		printf("Test failed: The 'func_chara_char_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_char_char(char*,char,char,char)", func_chara_char_char_char)) {
		printf("Test failed: The 'func_chara_char_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_char_chara(char*,char,char,char*)", func_chara_char_char_chara)) {
		printf("Test failed: The 'func_chara_char_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_chara(char*,char,char*)", func_chara_char_chara)) {
		printf("Test failed: The 'func_chara_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_chara_int(char*,char,char*,int)", func_chara_char_chara_int)) {
		printf("Test failed: The 'func_chara_char_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_chara_inta(char*,char,char*,int*)", func_chara_char_chara_inta)) {
		printf("Test failed: The 'func_chara_char_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_chara_char(char*,char,char*,char)", func_chara_char_chara_char)) {
		printf("Test failed: The 'func_chara_char_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_char_chara_chara(char*,char,char*,char*)", func_chara_char_chara_chara)) {
		printf("Test failed: The 'func_chara_char_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara(char*,char*)", func_chara_chara)) {
		printf("Test failed: The 'func_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_int(char*,char*,int)", func_chara_chara_int)) {
		printf("Test failed: The 'func_chara_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_int_int(char*,char*,int,int)", func_chara_chara_int_int)) {
		printf("Test failed: The 'func_chara_chara_int_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_int_inta(char*,char*,int,int*)", func_chara_chara_int_inta)) {
		printf("Test failed: The 'func_chara_chara_int_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_int_char(char*,char*,int,char)", func_chara_chara_int_char)) {
		printf("Test failed: The 'func_chara_chara_int_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_int_chara(char*,char*,int,char*)", func_chara_chara_int_chara)) {
		printf("Test failed: The 'func_chara_chara_int_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_inta(char*,char*,int*)", func_chara_chara_inta)) {
		printf("Test failed: The 'func_chara_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_inta_int(char*,char*,int*,int)", func_chara_chara_inta_int)) {
		printf("Test failed: The 'func_chara_chara_inta_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_inta_inta(char*,char*,int*,int*)", func_chara_chara_inta_inta)) {
		printf("Test failed: The 'func_chara_chara_inta_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_inta_char(char*,char*,int*,char)", func_chara_chara_inta_char)) {
		printf("Test failed: The 'func_chara_chara_inta_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_inta_chara(char*,char*,int*,char*)", func_chara_chara_inta_chara)) {
		printf("Test failed: The 'func_chara_chara_inta_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_char(char*,char*,char)", func_chara_chara_char)) {
		printf("Test failed: The 'func_chara_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_char_int(char*,char*,char,int)", func_chara_chara_char_int)) {
		printf("Test failed: The 'func_chara_chara_char_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_char_inta(char*,char*,char,int*)", func_chara_chara_char_inta)) {
		printf("Test failed: The 'func_chara_chara_char_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_char_char(char*,char*,char,char)", func_chara_chara_char_char)) {
		printf("Test failed: The 'func_chara_chara_char_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_char_chara(char*,char*,char,char*)", func_chara_chara_char_chara)) {
		printf("Test failed: The 'func_chara_chara_char_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_chara(char*,char*,char*)", func_chara_chara_chara)) {
		printf("Test failed: The 'func_chara_chara_chara' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_chara_int(char*,char*,char*,int)", func_chara_chara_chara_int)) {
		printf("Test failed: The 'func_chara_chara_chara_int' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_chara_inta(char*,char*,char*,int*)", func_chara_chara_chara_inta)) {
		printf("Test failed: The 'func_chara_chara_chara_inta' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_chara_char(char*,char*,char*,char)", func_chara_chara_chara_char)) {
		printf("Test failed: The 'func_chara_chara_chara_char' expose returned an error code");
		exit(1);
	} else if (!rfc_expose("int func_chara_chara_chara_chara(char*,char*,char*,char*)", func_chara_chara_chara_chara)) {
		printf("Test failed: The 'func_chara_chara_chara_chara' expose returned an error code");
		exit(1);
	}
	return 1;
}

int execute_test() {
	int expected_value;
	int ptr4_3[] = {127, 126, 4, 127};
	if (!rfc_call("internal", "func_int_int_int_inta", "int", 4, "int", 4, "int", 4, "int*", ptr4_3, 4)) {
		printf("Test failed: The 'func_int_int_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 4*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr6_3[] = {127, 126, 6, 127};
	if (!rfc_call("internal", "func_int_int_int_chara", "int", 6, "int", 6, "int", 6, "char*", ptr6_3, 4)) {
		printf("Test failed: The 'func_int_int_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 6*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr7_2[] = {127, 126, 7, 127};
	if (!rfc_call("internal", "func_int_int_inta", "int", 7, "int", 7, "int*", ptr7_2, 4)) {
		printf("Test failed: The 'func_int_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 7*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr8_2[] = {127, 126, 8, 127};
	if (!rfc_call("internal", "func_int_int_inta_int", "int", 8, "int", 8, "int*", ptr8_2, 4, "int", 8)) {
		printf("Test failed: The 'func_int_int_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 8*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr9_2[] = {127, 126, 9, 127};
	int ptr9_3[] = {127, 126, 9, 127};
	if (!rfc_call("internal", "func_int_int_inta_inta", "int", 9, "int", 9, "int*", ptr9_2, 4, "int*", ptr9_3, 4)) {
		printf("Test failed: The 'func_int_int_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 9*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr10_2[] = {127, 126, 10, 127};
	if (!rfc_call("internal", "func_int_int_inta_char", "int", 10, "int", 10, "int*", ptr10_2, 4, "char", 10)) {
		printf("Test failed: The 'func_int_int_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 10*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr11_2[] = {127, 126, 11, 127};
	char ptr11_3[] = {127, 126, 11, 127};
	if (!rfc_call("internal", "func_int_int_inta_chara", "int", 11, "int", 11, "int*", ptr11_2, 4, "char*", ptr11_3, 4)) {
		printf("Test failed: The 'func_int_int_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 11*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr14_3[] = {127, 126, 14, 127};
	if (!rfc_call("internal", "func_int_int_char_inta", "int", 14, "int", 14, "char", 14, "int*", ptr14_3, 4)) {
		printf("Test failed: The 'func_int_int_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 14*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr16_3[] = {127, 126, 16, 127};
	if (!rfc_call("internal", "func_int_int_char_chara", "int", 16, "int", 16, "char", 16, "char*", ptr16_3, 4)) {
		printf("Test failed: The 'func_int_int_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 16*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr17_2[] = {127, 126, 17, 127};
	if (!rfc_call("internal", "func_int_int_chara", "int", 17, "int", 17, "char*", ptr17_2, 4)) {
		printf("Test failed: The 'func_int_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 17*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr18_2[] = {127, 126, 18, 127};
	if (!rfc_call("internal", "func_int_int_chara_int", "int", 18, "int", 18, "char*", ptr18_2, 4, "int", 18)) {
		printf("Test failed: The 'func_int_int_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 18*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr19_2[] = {127, 126, 19, 127};
	int ptr19_3[] = {127, 126, 19, 127};
	if (!rfc_call("internal", "func_int_int_chara_inta", "int", 19, "int", 19, "char*", ptr19_2, 4, "int*", ptr19_3, 4)) {
		printf("Test failed: The 'func_int_int_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 19*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr20_2[] = {127, 126, 20, 127};
	if (!rfc_call("internal", "func_int_int_chara_char", "int", 20, "int", 20, "char*", ptr20_2, 4, "char", 20)) {
		printf("Test failed: The 'func_int_int_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 20*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr21_2[] = {127, 126, 21, 127};
	char ptr21_3[] = {127, 126, 21, 127};
	if (!rfc_call("internal", "func_int_int_chara_chara", "int", 21, "int", 21, "char*", ptr21_2, 4, "char*", ptr21_3, 4)) {
		printf("Test failed: The 'func_int_int_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 21*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_int_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr22_1[] = {127, 126, 22, 127};
	if (!rfc_call("internal", "func_int_inta", "int", 22, "int*", ptr22_1, 4)) {
		printf("Test failed: The 'func_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 22*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr23_1[] = {127, 126, 23, 127};
	if (!rfc_call("internal", "func_int_inta_int", "int", 23, "int*", ptr23_1, 4, "int", 23)) {
		printf("Test failed: The 'func_int_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 23*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr24_1[] = {127, 126, 24, 127};
	if (!rfc_call("internal", "func_int_inta_int_int", "int", 24, "int*", ptr24_1, 4, "int", 24, "int", 24)) {
		printf("Test failed: The 'func_int_inta_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 24*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr25_1[] = {127, 126, 25, 127};
	int ptr25_3[] = {127, 126, 25, 127};
	if (!rfc_call("internal", "func_int_inta_int_inta", "int", 25, "int*", ptr25_1, 4, "int", 25, "int*", ptr25_3, 4)) {
		printf("Test failed: The 'func_int_inta_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 25*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr26_1[] = {127, 126, 26, 127};
	if (!rfc_call("internal", "func_int_inta_int_char", "int", 26, "int*", ptr26_1, 4, "int", 26, "char", 26)) {
		printf("Test failed: The 'func_int_inta_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 26*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr27_1[] = {127, 126, 27, 127};
	char ptr27_3[] = {127, 126, 27, 127};
	if (!rfc_call("internal", "func_int_inta_int_chara", "int", 27, "int*", ptr27_1, 4, "int", 27, "char*", ptr27_3, 4)) {
		printf("Test failed: The 'func_int_inta_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 27*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr28_1[] = {127, 126, 28, 127};
	int ptr28_2[] = {127, 126, 28, 127};
	if (!rfc_call("internal", "func_int_inta_inta", "int", 28, "int*", ptr28_1, 4, "int*", ptr28_2, 4)) {
		printf("Test failed: The 'func_int_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 28*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr29_1[] = {127, 126, 29, 127};
	int ptr29_2[] = {127, 126, 29, 127};
	if (!rfc_call("internal", "func_int_inta_inta_int", "int", 29, "int*", ptr29_1, 4, "int*", ptr29_2, 4, "int", 29)) {
		printf("Test failed: The 'func_int_inta_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 29*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr30_1[] = {127, 126, 30, 127};
	int ptr30_2[] = {127, 126, 30, 127};
	int ptr30_3[] = {127, 126, 30, 127};
	if (!rfc_call("internal", "func_int_inta_inta_inta", "int", 30, "int*", ptr30_1, 4, "int*", ptr30_2, 4, "int*", ptr30_3, 4)) {
		printf("Test failed: The 'func_int_inta_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 30*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr31_1[] = {127, 126, 31, 127};
	int ptr31_2[] = {127, 126, 31, 127};
	if (!rfc_call("internal", "func_int_inta_inta_char", "int", 31, "int*", ptr31_1, 4, "int*", ptr31_2, 4, "char", 31)) {
		printf("Test failed: The 'func_int_inta_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 31*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr32_1[] = {127, 126, 32, 127};
	int ptr32_2[] = {127, 126, 32, 127};
	char ptr32_3[] = {127, 126, 32, 127};
	if (!rfc_call("internal", "func_int_inta_inta_chara", "int", 32, "int*", ptr32_1, 4, "int*", ptr32_2, 4, "char*", ptr32_3, 4)) {
		printf("Test failed: The 'func_int_inta_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 32*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr33_1[] = {127, 126, 33, 127};
	if (!rfc_call("internal", "func_int_inta_char", "int", 33, "int*", ptr33_1, 4, "char", 33)) {
		printf("Test failed: The 'func_int_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 33*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr34_1[] = {127, 126, 34, 127};
	if (!rfc_call("internal", "func_int_inta_char_int", "int", 34, "int*", ptr34_1, 4, "char", 34, "int", 34)) {
		printf("Test failed: The 'func_int_inta_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 34*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr35_1[] = {127, 126, 35, 127};
	int ptr35_3[] = {127, 126, 35, 127};
	if (!rfc_call("internal", "func_int_inta_char_inta", "int", 35, "int*", ptr35_1, 4, "char", 35, "int*", ptr35_3, 4)) {
		printf("Test failed: The 'func_int_inta_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 35*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr36_1[] = {127, 126, 36, 127};
	if (!rfc_call("internal", "func_int_inta_char_char", "int", 36, "int*", ptr36_1, 4, "char", 36, "char", 36)) {
		printf("Test failed: The 'func_int_inta_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 36*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr37_1[] = {127, 126, 37, 127};
	char ptr37_3[] = {127, 126, 37, 127};
	if (!rfc_call("internal", "func_int_inta_char_chara", "int", 37, "int*", ptr37_1, 4, "char", 37, "char*", ptr37_3, 4)) {
		printf("Test failed: The 'func_int_inta_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 37*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr38_1[] = {127, 126, 38, 127};
	char ptr38_2[] = {127, 126, 38, 127};
	if (!rfc_call("internal", "func_int_inta_chara", "int", 38, "int*", ptr38_1, 4, "char*", ptr38_2, 4)) {
		printf("Test failed: The 'func_int_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 38*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr39_1[] = {127, 126, 39, 127};
	char ptr39_2[] = {127, 126, 39, 127};
	if (!rfc_call("internal", "func_int_inta_chara_int", "int", 39, "int*", ptr39_1, 4, "char*", ptr39_2, 4, "int", 39)) {
		printf("Test failed: The 'func_int_inta_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 39*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr40_1[] = {127, 126, 40, 127};
	char ptr40_2[] = {127, 126, 40, 127};
	int ptr40_3[] = {127, 126, 40, 127};
	if (!rfc_call("internal", "func_int_inta_chara_inta", "int", 40, "int*", ptr40_1, 4, "char*", ptr40_2, 4, "int*", ptr40_3, 4)) {
		printf("Test failed: The 'func_int_inta_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 40*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr41_1[] = {127, 126, 41, 127};
	char ptr41_2[] = {127, 126, 41, 127};
	if (!rfc_call("internal", "func_int_inta_chara_char", "int", 41, "int*", ptr41_1, 4, "char*", ptr41_2, 4, "char", 41)) {
		printf("Test failed: The 'func_int_inta_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 41*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr42_1[] = {127, 126, 42, 127};
	char ptr42_2[] = {127, 126, 42, 127};
	char ptr42_3[] = {127, 126, 42, 127};
	if (!rfc_call("internal", "func_int_inta_chara_chara", "int", 42, "int*", ptr42_1, 4, "char*", ptr42_2, 4, "char*", ptr42_3, 4)) {
		printf("Test failed: The 'func_int_inta_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 42*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_inta_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr46_3[] = {127, 126, 46, 127};
	if (!rfc_call("internal", "func_int_char_int_inta", "int", 46, "char", 46, "int", 46, "int*", ptr46_3, 4)) {
		printf("Test failed: The 'func_int_char_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 46*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr48_3[] = {127, 126, 48, 127};
	if (!rfc_call("internal", "func_int_char_int_chara", "int", 48, "char", 48, "int", 48, "char*", ptr48_3, 4)) {
		printf("Test failed: The 'func_int_char_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 48*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr49_2[] = {127, 126, 49, 127};
	if (!rfc_call("internal", "func_int_char_inta", "int", 49, "char", 49, "int*", ptr49_2, 4)) {
		printf("Test failed: The 'func_int_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 49*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr50_2[] = {127, 126, 50, 127};
	if (!rfc_call("internal", "func_int_char_inta_int", "int", 50, "char", 50, "int*", ptr50_2, 4, "int", 50)) {
		printf("Test failed: The 'func_int_char_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 50*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr51_2[] = {127, 126, 51, 127};
	int ptr51_3[] = {127, 126, 51, 127};
	if (!rfc_call("internal", "func_int_char_inta_inta", "int", 51, "char", 51, "int*", ptr51_2, 4, "int*", ptr51_3, 4)) {
		printf("Test failed: The 'func_int_char_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 51*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr52_2[] = {127, 126, 52, 127};
	if (!rfc_call("internal", "func_int_char_inta_char", "int", 52, "char", 52, "int*", ptr52_2, 4, "char", 52)) {
		printf("Test failed: The 'func_int_char_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 52*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr53_2[] = {127, 126, 53, 127};
	char ptr53_3[] = {127, 126, 53, 127};
	if (!rfc_call("internal", "func_int_char_inta_chara", "int", 53, "char", 53, "int*", ptr53_2, 4, "char*", ptr53_3, 4)) {
		printf("Test failed: The 'func_int_char_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 53*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr56_3[] = {127, 126, 56, 127};
	if (!rfc_call("internal", "func_int_char_char_inta", "int", 56, "char", 56, "char", 56, "int*", ptr56_3, 4)) {
		printf("Test failed: The 'func_int_char_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 56*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr58_3[] = {127, 126, 58, 127};
	if (!rfc_call("internal", "func_int_char_char_chara", "int", 58, "char", 58, "char", 58, "char*", ptr58_3, 4)) {
		printf("Test failed: The 'func_int_char_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 58*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr59_2[] = {127, 126, 59, 127};
	if (!rfc_call("internal", "func_int_char_chara", "int", 59, "char", 59, "char*", ptr59_2, 4)) {
		printf("Test failed: The 'func_int_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 59*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr60_2[] = {127, 126, 60, 127};
	if (!rfc_call("internal", "func_int_char_chara_int", "int", 60, "char", 60, "char*", ptr60_2, 4, "int", 60)) {
		printf("Test failed: The 'func_int_char_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 60*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr61_2[] = {127, 126, 61, 127};
	int ptr61_3[] = {127, 126, 61, 127};
	if (!rfc_call("internal", "func_int_char_chara_inta", "int", 61, "char", 61, "char*", ptr61_2, 4, "int*", ptr61_3, 4)) {
		printf("Test failed: The 'func_int_char_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 61*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr62_2[] = {127, 126, 62, 127};
	if (!rfc_call("internal", "func_int_char_chara_char", "int", 62, "char", 62, "char*", ptr62_2, 4, "char", 62)) {
		printf("Test failed: The 'func_int_char_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 62*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr63_2[] = {127, 126, 63, 127};
	char ptr63_3[] = {127, 126, 63, 127};
	if (!rfc_call("internal", "func_int_char_chara_chara", "int", 63, "char", 63, "char*", ptr63_2, 4, "char*", ptr63_3, 4)) {
		printf("Test failed: The 'func_int_char_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 63*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_char_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr64_1[] = {127, 126, 64, 127};
	if (!rfc_call("internal", "func_int_chara", "int", 64, "char*", ptr64_1, 4)) {
		printf("Test failed: The 'func_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 64*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr65_1[] = {127, 126, 65, 127};
	if (!rfc_call("internal", "func_int_chara_int", "int", 65, "char*", ptr65_1, 4, "int", 65)) {
		printf("Test failed: The 'func_int_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 65*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr66_1[] = {127, 126, 66, 127};
	if (!rfc_call("internal", "func_int_chara_int_int", "int", 66, "char*", ptr66_1, 4, "int", 66, "int", 66)) {
		printf("Test failed: The 'func_int_chara_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 66*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr67_1[] = {127, 126, 67, 127};
	int ptr67_3[] = {127, 126, 67, 127};
	if (!rfc_call("internal", "func_int_chara_int_inta", "int", 67, "char*", ptr67_1, 4, "int", 67, "int*", ptr67_3, 4)) {
		printf("Test failed: The 'func_int_chara_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 67*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr68_1[] = {127, 126, 68, 127};
	if (!rfc_call("internal", "func_int_chara_int_char", "int", 68, "char*", ptr68_1, 4, "int", 68, "char", 68)) {
		printf("Test failed: The 'func_int_chara_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 68*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr69_1[] = {127, 126, 69, 127};
	char ptr69_3[] = {127, 126, 69, 127};
	if (!rfc_call("internal", "func_int_chara_int_chara", "int", 69, "char*", ptr69_1, 4, "int", 69, "char*", ptr69_3, 4)) {
		printf("Test failed: The 'func_int_chara_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 69*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr70_1[] = {127, 126, 70, 127};
	int ptr70_2[] = {127, 126, 70, 127};
	if (!rfc_call("internal", "func_int_chara_inta", "int", 70, "char*", ptr70_1, 4, "int*", ptr70_2, 4)) {
		printf("Test failed: The 'func_int_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 70*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr71_1[] = {127, 126, 71, 127};
	int ptr71_2[] = {127, 126, 71, 127};
	if (!rfc_call("internal", "func_int_chara_inta_int", "int", 71, "char*", ptr71_1, 4, "int*", ptr71_2, 4, "int", 71)) {
		printf("Test failed: The 'func_int_chara_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 71*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr72_1[] = {127, 126, 72, 127};
	int ptr72_2[] = {127, 126, 72, 127};
	int ptr72_3[] = {127, 126, 72, 127};
	if (!rfc_call("internal", "func_int_chara_inta_inta", "int", 72, "char*", ptr72_1, 4, "int*", ptr72_2, 4, "int*", ptr72_3, 4)) {
		printf("Test failed: The 'func_int_chara_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 72*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr73_1[] = {127, 126, 73, 127};
	int ptr73_2[] = {127, 126, 73, 127};
	if (!rfc_call("internal", "func_int_chara_inta_char", "int", 73, "char*", ptr73_1, 4, "int*", ptr73_2, 4, "char", 73)) {
		printf("Test failed: The 'func_int_chara_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 73*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr74_1[] = {127, 126, 74, 127};
	int ptr74_2[] = {127, 126, 74, 127};
	char ptr74_3[] = {127, 126, 74, 127};
	if (!rfc_call("internal", "func_int_chara_inta_chara", "int", 74, "char*", ptr74_1, 4, "int*", ptr74_2, 4, "char*", ptr74_3, 4)) {
		printf("Test failed: The 'func_int_chara_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 74*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr75_1[] = {127, 126, 75, 127};
	if (!rfc_call("internal", "func_int_chara_char", "int", 75, "char*", ptr75_1, 4, "char", 75)) {
		printf("Test failed: The 'func_int_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 75*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr76_1[] = {127, 126, 76, 127};
	if (!rfc_call("internal", "func_int_chara_char_int", "int", 76, "char*", ptr76_1, 4, "char", 76, "int", 76)) {
		printf("Test failed: The 'func_int_chara_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 76*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr77_1[] = {127, 126, 77, 127};
	int ptr77_3[] = {127, 126, 77, 127};
	if (!rfc_call("internal", "func_int_chara_char_inta", "int", 77, "char*", ptr77_1, 4, "char", 77, "int*", ptr77_3, 4)) {
		printf("Test failed: The 'func_int_chara_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 77*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr78_1[] = {127, 126, 78, 127};
	if (!rfc_call("internal", "func_int_chara_char_char", "int", 78, "char*", ptr78_1, 4, "char", 78, "char", 78)) {
		printf("Test failed: The 'func_int_chara_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 78*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr79_1[] = {127, 126, 79, 127};
	char ptr79_3[] = {127, 126, 79, 127};
	if (!rfc_call("internal", "func_int_chara_char_chara", "int", 79, "char*", ptr79_1, 4, "char", 79, "char*", ptr79_3, 4)) {
		printf("Test failed: The 'func_int_chara_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 79*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr80_1[] = {127, 126, 80, 127};
	char ptr80_2[] = {127, 126, 80, 127};
	if (!rfc_call("internal", "func_int_chara_chara", "int", 80, "char*", ptr80_1, 4, "char*", ptr80_2, 4)) {
		printf("Test failed: The 'func_int_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 80*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr81_1[] = {127, 126, 81, 127};
	char ptr81_2[] = {127, 126, 81, 127};
	if (!rfc_call("internal", "func_int_chara_chara_int", "int", 81, "char*", ptr81_1, 4, "char*", ptr81_2, 4, "int", 81)) {
		printf("Test failed: The 'func_int_chara_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 81*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr82_1[] = {127, 126, 82, 127};
	char ptr82_2[] = {127, 126, 82, 127};
	int ptr82_3[] = {127, 126, 82, 127};
	if (!rfc_call("internal", "func_int_chara_chara_inta", "int", 82, "char*", ptr82_1, 4, "char*", ptr82_2, 4, "int*", ptr82_3, 4)) {
		printf("Test failed: The 'func_int_chara_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 82*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr83_1[] = {127, 126, 83, 127};
	char ptr83_2[] = {127, 126, 83, 127};
	if (!rfc_call("internal", "func_int_chara_chara_char", "int", 83, "char*", ptr83_1, 4, "char*", ptr83_2, 4, "char", 83)) {
		printf("Test failed: The 'func_int_chara_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 83*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr84_1[] = {127, 126, 84, 127};
	char ptr84_2[] = {127, 126, 84, 127};
	char ptr84_3[] = {127, 126, 84, 127};
	if (!rfc_call("internal", "func_int_chara_chara_chara", "int", 84, "char*", ptr84_1, 4, "char*", ptr84_2, 4, "char*", ptr84_3, 4)) {
		printf("Test failed: The 'func_int_chara_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 84*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_int_chara_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr85_0[] = {127, 126, 85, 127};
	if (!rfc_call("internal", "func_inta", "int*", ptr85_0, 4)) {
		printf("Test failed: The 'func_inta' call returned an error code");
		exit(1);
	}
	expected_value = 85*1;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr86_0[] = {127, 126, 86, 127};
	if (!rfc_call("internal", "func_inta_int", "int*", ptr86_0, 4, "int", 86)) {
		printf("Test failed: The 'func_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 86*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr87_0[] = {127, 126, 87, 127};
	if (!rfc_call("internal", "func_inta_int_int", "int*", ptr87_0, 4, "int", 87, "int", 87)) {
		printf("Test failed: The 'func_inta_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 87*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr88_0[] = {127, 126, 88, 127};
	if (!rfc_call("internal", "func_inta_int_int_int", "int*", ptr88_0, 4, "int", 88, "int", 88, "int", 88)) {
		printf("Test failed: The 'func_inta_int_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 88*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr89_0[] = {127, 126, 89, 127};
	int ptr89_3[] = {127, 126, 89, 127};
	if (!rfc_call("internal", "func_inta_int_int_inta", "int*", ptr89_0, 4, "int", 89, "int", 89, "int*", ptr89_3, 4)) {
		printf("Test failed: The 'func_inta_int_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 89*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr90_0[] = {127, 126, 90, 127};
	if (!rfc_call("internal", "func_inta_int_int_char", "int*", ptr90_0, 4, "int", 90, "int", 90, "char", 90)) {
		printf("Test failed: The 'func_inta_int_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 90*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr91_0[] = {127, 126, 91, 127};
	char ptr91_3[] = {127, 126, 91, 127};
	if (!rfc_call("internal", "func_inta_int_int_chara", "int*", ptr91_0, 4, "int", 91, "int", 91, "char*", ptr91_3, 4)) {
		printf("Test failed: The 'func_inta_int_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 91*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr92_0[] = {127, 126, 92, 127};
	int ptr92_2[] = {127, 126, 92, 127};
	if (!rfc_call("internal", "func_inta_int_inta", "int*", ptr92_0, 4, "int", 92, "int*", ptr92_2, 4)) {
		printf("Test failed: The 'func_inta_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 92*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr93_0[] = {127, 126, 93, 127};
	int ptr93_2[] = {127, 126, 93, 127};
	if (!rfc_call("internal", "func_inta_int_inta_int", "int*", ptr93_0, 4, "int", 93, "int*", ptr93_2, 4, "int", 93)) {
		printf("Test failed: The 'func_inta_int_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 93*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr94_0[] = {127, 126, 94, 127};
	int ptr94_2[] = {127, 126, 94, 127};
	int ptr94_3[] = {127, 126, 94, 127};
	if (!rfc_call("internal", "func_inta_int_inta_inta", "int*", ptr94_0, 4, "int", 94, "int*", ptr94_2, 4, "int*", ptr94_3, 4)) {
		printf("Test failed: The 'func_inta_int_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 94*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr95_0[] = {127, 126, 95, 127};
	int ptr95_2[] = {127, 126, 95, 127};
	if (!rfc_call("internal", "func_inta_int_inta_char", "int*", ptr95_0, 4, "int", 95, "int*", ptr95_2, 4, "char", 95)) {
		printf("Test failed: The 'func_inta_int_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 95*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr96_0[] = {127, 126, 96, 127};
	int ptr96_2[] = {127, 126, 96, 127};
	char ptr96_3[] = {127, 126, 96, 127};
	if (!rfc_call("internal", "func_inta_int_inta_chara", "int*", ptr96_0, 4, "int", 96, "int*", ptr96_2, 4, "char*", ptr96_3, 4)) {
		printf("Test failed: The 'func_inta_int_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 96*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr97_0[] = {127, 126, 97, 127};
	if (!rfc_call("internal", "func_inta_int_char", "int*", ptr97_0, 4, "int", 97, "char", 97)) {
		printf("Test failed: The 'func_inta_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 97*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr98_0[] = {127, 126, 98, 127};
	if (!rfc_call("internal", "func_inta_int_char_int", "int*", ptr98_0, 4, "int", 98, "char", 98, "int", 98)) {
		printf("Test failed: The 'func_inta_int_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 98*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr99_0[] = {127, 126, 99, 127};
	int ptr99_3[] = {127, 126, 99, 127};
	if (!rfc_call("internal", "func_inta_int_char_inta", "int*", ptr99_0, 4, "int", 99, "char", 99, "int*", ptr99_3, 4)) {
		printf("Test failed: The 'func_inta_int_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 99*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr100_0[] = {127, 126, 100, 127};
	if (!rfc_call("internal", "func_inta_int_char_char", "int*", ptr100_0, 4, "int", 100, "char", 100, "char", 100)) {
		printf("Test failed: The 'func_inta_int_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 100*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr101_0[] = {127, 126, 101, 127};
	char ptr101_3[] = {127, 126, 101, 127};
	if (!rfc_call("internal", "func_inta_int_char_chara", "int*", ptr101_0, 4, "int", 101, "char", 101, "char*", ptr101_3, 4)) {
		printf("Test failed: The 'func_inta_int_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 101*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr102_0[] = {127, 126, 102, 127};
	char ptr102_2[] = {127, 126, 102, 127};
	if (!rfc_call("internal", "func_inta_int_chara", "int*", ptr102_0, 4, "int", 102, "char*", ptr102_2, 4)) {
		printf("Test failed: The 'func_inta_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 102*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr103_0[] = {127, 126, 103, 127};
	char ptr103_2[] = {127, 126, 103, 127};
	if (!rfc_call("internal", "func_inta_int_chara_int", "int*", ptr103_0, 4, "int", 103, "char*", ptr103_2, 4, "int", 103)) {
		printf("Test failed: The 'func_inta_int_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 103*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr104_0[] = {127, 126, 104, 127};
	char ptr104_2[] = {127, 126, 104, 127};
	int ptr104_3[] = {127, 126, 104, 127};
	if (!rfc_call("internal", "func_inta_int_chara_inta", "int*", ptr104_0, 4, "int", 104, "char*", ptr104_2, 4, "int*", ptr104_3, 4)) {
		printf("Test failed: The 'func_inta_int_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 104*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr105_0[] = {127, 126, 105, 127};
	char ptr105_2[] = {127, 126, 105, 127};
	if (!rfc_call("internal", "func_inta_int_chara_char", "int*", ptr105_0, 4, "int", 105, "char*", ptr105_2, 4, "char", 105)) {
		printf("Test failed: The 'func_inta_int_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 105*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr106_0[] = {127, 126, 106, 127};
	char ptr106_2[] = {127, 126, 106, 127};
	char ptr106_3[] = {127, 126, 106, 127};
	if (!rfc_call("internal", "func_inta_int_chara_chara", "int*", ptr106_0, 4, "int", 106, "char*", ptr106_2, 4, "char*", ptr106_3, 4)) {
		printf("Test failed: The 'func_inta_int_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 106*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_int_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr107_0[] = {127, 126, 107, 127};
	int ptr107_1[] = {127, 126, 107, 127};
	if (!rfc_call("internal", "func_inta_inta", "int*", ptr107_0, 4, "int*", ptr107_1, 4)) {
		printf("Test failed: The 'func_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 107*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr108_0[] = {127, 126, 108, 127};
	int ptr108_1[] = {127, 126, 108, 127};
	if (!rfc_call("internal", "func_inta_inta_int", "int*", ptr108_0, 4, "int*", ptr108_1, 4, "int", 108)) {
		printf("Test failed: The 'func_inta_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 108*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr109_0[] = {127, 126, 109, 127};
	int ptr109_1[] = {127, 126, 109, 127};
	if (!rfc_call("internal", "func_inta_inta_int_int", "int*", ptr109_0, 4, "int*", ptr109_1, 4, "int", 109, "int", 109)) {
		printf("Test failed: The 'func_inta_inta_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 109*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr110_0[] = {127, 126, 110, 127};
	int ptr110_1[] = {127, 126, 110, 127};
	int ptr110_3[] = {127, 126, 110, 127};
	if (!rfc_call("internal", "func_inta_inta_int_inta", "int*", ptr110_0, 4, "int*", ptr110_1, 4, "int", 110, "int*", ptr110_3, 4)) {
		printf("Test failed: The 'func_inta_inta_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 110*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr111_0[] = {127, 126, 111, 127};
	int ptr111_1[] = {127, 126, 111, 127};
	if (!rfc_call("internal", "func_inta_inta_int_char", "int*", ptr111_0, 4, "int*", ptr111_1, 4, "int", 111, "char", 111)) {
		printf("Test failed: The 'func_inta_inta_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 111*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr112_0[] = {127, 126, 112, 127};
	int ptr112_1[] = {127, 126, 112, 127};
	char ptr112_3[] = {127, 126, 112, 127};
	if (!rfc_call("internal", "func_inta_inta_int_chara", "int*", ptr112_0, 4, "int*", ptr112_1, 4, "int", 112, "char*", ptr112_3, 4)) {
		printf("Test failed: The 'func_inta_inta_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 112*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr113_0[] = {127, 126, 113, 127};
	int ptr113_1[] = {127, 126, 113, 127};
	int ptr113_2[] = {127, 126, 113, 127};
	if (!rfc_call("internal", "func_inta_inta_inta", "int*", ptr113_0, 4, "int*", ptr113_1, 4, "int*", ptr113_2, 4)) {
		printf("Test failed: The 'func_inta_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 113*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr114_0[] = {127, 126, 114, 127};
	int ptr114_1[] = {127, 126, 114, 127};
	int ptr114_2[] = {127, 126, 114, 127};
	if (!rfc_call("internal", "func_inta_inta_inta_int", "int*", ptr114_0, 4, "int*", ptr114_1, 4, "int*", ptr114_2, 4, "int", 114)) {
		printf("Test failed: The 'func_inta_inta_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 114*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr115_0[] = {127, 126, 115, 127};
	int ptr115_1[] = {127, 126, 115, 127};
	int ptr115_2[] = {127, 126, 115, 127};
	int ptr115_3[] = {127, 126, 115, 127};
	if (!rfc_call("internal", "func_inta_inta_inta_inta", "int*", ptr115_0, 4, "int*", ptr115_1, 4, "int*", ptr115_2, 4, "int*", ptr115_3, 4)) {
		printf("Test failed: The 'func_inta_inta_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 115*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr116_0[] = {127, 126, 116, 127};
	int ptr116_1[] = {127, 126, 116, 127};
	int ptr116_2[] = {127, 126, 116, 127};
	if (!rfc_call("internal", "func_inta_inta_inta_char", "int*", ptr116_0, 4, "int*", ptr116_1, 4, "int*", ptr116_2, 4, "char", 116)) {
		printf("Test failed: The 'func_inta_inta_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 116*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr117_0[] = {127, 126, 117, 127};
	int ptr117_1[] = {127, 126, 117, 127};
	int ptr117_2[] = {127, 126, 117, 127};
	char ptr117_3[] = {127, 126, 117, 127};
	if (!rfc_call("internal", "func_inta_inta_inta_chara", "int*", ptr117_0, 4, "int*", ptr117_1, 4, "int*", ptr117_2, 4, "char*", ptr117_3, 4)) {
		printf("Test failed: The 'func_inta_inta_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 117*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr118_0[] = {127, 126, 118, 127};
	int ptr118_1[] = {127, 126, 118, 127};
	if (!rfc_call("internal", "func_inta_inta_char", "int*", ptr118_0, 4, "int*", ptr118_1, 4, "char", 118)) {
		printf("Test failed: The 'func_inta_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 118*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr119_0[] = {127, 126, 119, 127};
	int ptr119_1[] = {127, 126, 119, 127};
	if (!rfc_call("internal", "func_inta_inta_char_int", "int*", ptr119_0, 4, "int*", ptr119_1, 4, "char", 119, "int", 119)) {
		printf("Test failed: The 'func_inta_inta_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 119*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr120_0[] = {127, 126, 120, 127};
	int ptr120_1[] = {127, 126, 120, 127};
	int ptr120_3[] = {127, 126, 120, 127};
	if (!rfc_call("internal", "func_inta_inta_char_inta", "int*", ptr120_0, 4, "int*", ptr120_1, 4, "char", 120, "int*", ptr120_3, 4)) {
		printf("Test failed: The 'func_inta_inta_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 120*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr121_0[] = {127, 126, 121, 127};
	int ptr121_1[] = {127, 126, 121, 127};
	if (!rfc_call("internal", "func_inta_inta_char_char", "int*", ptr121_0, 4, "int*", ptr121_1, 4, "char", 121, "char", 121)) {
		printf("Test failed: The 'func_inta_inta_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 121*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr122_0[] = {127, 126, 122, 127};
	int ptr122_1[] = {127, 126, 122, 127};
	char ptr122_3[] = {127, 126, 122, 127};
	if (!rfc_call("internal", "func_inta_inta_char_chara", "int*", ptr122_0, 4, "int*", ptr122_1, 4, "char", 122, "char*", ptr122_3, 4)) {
		printf("Test failed: The 'func_inta_inta_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 122*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr123_0[] = {127, 126, 123, 127};
	int ptr123_1[] = {127, 126, 123, 127};
	char ptr123_2[] = {127, 126, 123, 127};
	if (!rfc_call("internal", "func_inta_inta_chara", "int*", ptr123_0, 4, "int*", ptr123_1, 4, "char*", ptr123_2, 4)) {
		printf("Test failed: The 'func_inta_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 123*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr124_0[] = {127, 126, 124, 127};
	int ptr124_1[] = {127, 126, 124, 127};
	char ptr124_2[] = {127, 126, 124, 127};
	if (!rfc_call("internal", "func_inta_inta_chara_int", "int*", ptr124_0, 4, "int*", ptr124_1, 4, "char*", ptr124_2, 4, "int", 124)) {
		printf("Test failed: The 'func_inta_inta_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 124*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr125_0[] = {127, 126, 125, 127};
	int ptr125_1[] = {127, 126, 125, 127};
	char ptr125_2[] = {127, 126, 125, 127};
	int ptr125_3[] = {127, 126, 125, 127};
	if (!rfc_call("internal", "func_inta_inta_chara_inta", "int*", ptr125_0, 4, "int*", ptr125_1, 4, "char*", ptr125_2, 4, "int*", ptr125_3, 4)) {
		printf("Test failed: The 'func_inta_inta_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 125*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr126_0[] = {127, 126, 126, 127};
	int ptr126_1[] = {127, 126, 126, 127};
	char ptr126_2[] = {127, 126, 126, 127};
	if (!rfc_call("internal", "func_inta_inta_chara_char", "int*", ptr126_0, 4, "int*", ptr126_1, 4, "char*", ptr126_2, 4, "char", 126)) {
		printf("Test failed: The 'func_inta_inta_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 126*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr127_0[] = {127, 126, 0, 127};
	int ptr127_1[] = {127, 126, 0, 127};
	char ptr127_2[] = {127, 126, 0, 127};
	char ptr127_3[] = {127, 126, 0, 127};
	if (!rfc_call("internal", "func_inta_inta_chara_chara", "int*", ptr127_0, 4, "int*", ptr127_1, 4, "char*", ptr127_2, 4, "char*", ptr127_3, 4)) {
		printf("Test failed: The 'func_inta_inta_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 0*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_inta_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr128_0[] = {127, 126, 1, 127};
	if (!rfc_call("internal", "func_inta_char", "int*", ptr128_0, 4, "char", 1)) {
		printf("Test failed: The 'func_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 1*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr129_0[] = {127, 126, 2, 127};
	if (!rfc_call("internal", "func_inta_char_int", "int*", ptr129_0, 4, "char", 2, "int", 2)) {
		printf("Test failed: The 'func_inta_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 2*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr130_0[] = {127, 126, 3, 127};
	if (!rfc_call("internal", "func_inta_char_int_int", "int*", ptr130_0, 4, "char", 3, "int", 3, "int", 3)) {
		printf("Test failed: The 'func_inta_char_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 3*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr131_0[] = {127, 126, 4, 127};
	int ptr131_3[] = {127, 126, 4, 127};
	if (!rfc_call("internal", "func_inta_char_int_inta", "int*", ptr131_0, 4, "char", 4, "int", 4, "int*", ptr131_3, 4)) {
		printf("Test failed: The 'func_inta_char_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 4*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr132_0[] = {127, 126, 5, 127};
	if (!rfc_call("internal", "func_inta_char_int_char", "int*", ptr132_0, 4, "char", 5, "int", 5, "char", 5)) {
		printf("Test failed: The 'func_inta_char_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 5*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr133_0[] = {127, 126, 6, 127};
	char ptr133_3[] = {127, 126, 6, 127};
	if (!rfc_call("internal", "func_inta_char_int_chara", "int*", ptr133_0, 4, "char", 6, "int", 6, "char*", ptr133_3, 4)) {
		printf("Test failed: The 'func_inta_char_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 6*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr134_0[] = {127, 126, 7, 127};
	int ptr134_2[] = {127, 126, 7, 127};
	if (!rfc_call("internal", "func_inta_char_inta", "int*", ptr134_0, 4, "char", 7, "int*", ptr134_2, 4)) {
		printf("Test failed: The 'func_inta_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 7*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr135_0[] = {127, 126, 8, 127};
	int ptr135_2[] = {127, 126, 8, 127};
	if (!rfc_call("internal", "func_inta_char_inta_int", "int*", ptr135_0, 4, "char", 8, "int*", ptr135_2, 4, "int", 8)) {
		printf("Test failed: The 'func_inta_char_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 8*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr136_0[] = {127, 126, 9, 127};
	int ptr136_2[] = {127, 126, 9, 127};
	int ptr136_3[] = {127, 126, 9, 127};
	if (!rfc_call("internal", "func_inta_char_inta_inta", "int*", ptr136_0, 4, "char", 9, "int*", ptr136_2, 4, "int*", ptr136_3, 4)) {
		printf("Test failed: The 'func_inta_char_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 9*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr137_0[] = {127, 126, 10, 127};
	int ptr137_2[] = {127, 126, 10, 127};
	if (!rfc_call("internal", "func_inta_char_inta_char", "int*", ptr137_0, 4, "char", 10, "int*", ptr137_2, 4, "char", 10)) {
		printf("Test failed: The 'func_inta_char_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 10*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr138_0[] = {127, 126, 11, 127};
	int ptr138_2[] = {127, 126, 11, 127};
	char ptr138_3[] = {127, 126, 11, 127};
	if (!rfc_call("internal", "func_inta_char_inta_chara", "int*", ptr138_0, 4, "char", 11, "int*", ptr138_2, 4, "char*", ptr138_3, 4)) {
		printf("Test failed: The 'func_inta_char_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 11*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr139_0[] = {127, 126, 12, 127};
	if (!rfc_call("internal", "func_inta_char_char", "int*", ptr139_0, 4, "char", 12, "char", 12)) {
		printf("Test failed: The 'func_inta_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 12*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr140_0[] = {127, 126, 13, 127};
	if (!rfc_call("internal", "func_inta_char_char_int", "int*", ptr140_0, 4, "char", 13, "char", 13, "int", 13)) {
		printf("Test failed: The 'func_inta_char_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 13*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr141_0[] = {127, 126, 14, 127};
	int ptr141_3[] = {127, 126, 14, 127};
	if (!rfc_call("internal", "func_inta_char_char_inta", "int*", ptr141_0, 4, "char", 14, "char", 14, "int*", ptr141_3, 4)) {
		printf("Test failed: The 'func_inta_char_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 14*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr142_0[] = {127, 126, 15, 127};
	if (!rfc_call("internal", "func_inta_char_char_char", "int*", ptr142_0, 4, "char", 15, "char", 15, "char", 15)) {
		printf("Test failed: The 'func_inta_char_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 15*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr143_0[] = {127, 126, 16, 127};
	char ptr143_3[] = {127, 126, 16, 127};
	if (!rfc_call("internal", "func_inta_char_char_chara", "int*", ptr143_0, 4, "char", 16, "char", 16, "char*", ptr143_3, 4)) {
		printf("Test failed: The 'func_inta_char_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 16*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr144_0[] = {127, 126, 17, 127};
	char ptr144_2[] = {127, 126, 17, 127};
	if (!rfc_call("internal", "func_inta_char_chara", "int*", ptr144_0, 4, "char", 17, "char*", ptr144_2, 4)) {
		printf("Test failed: The 'func_inta_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 17*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr145_0[] = {127, 126, 18, 127};
	char ptr145_2[] = {127, 126, 18, 127};
	if (!rfc_call("internal", "func_inta_char_chara_int", "int*", ptr145_0, 4, "char", 18, "char*", ptr145_2, 4, "int", 18)) {
		printf("Test failed: The 'func_inta_char_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 18*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr146_0[] = {127, 126, 19, 127};
	char ptr146_2[] = {127, 126, 19, 127};
	int ptr146_3[] = {127, 126, 19, 127};
	if (!rfc_call("internal", "func_inta_char_chara_inta", "int*", ptr146_0, 4, "char", 19, "char*", ptr146_2, 4, "int*", ptr146_3, 4)) {
		printf("Test failed: The 'func_inta_char_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 19*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr147_0[] = {127, 126, 20, 127};
	char ptr147_2[] = {127, 126, 20, 127};
	if (!rfc_call("internal", "func_inta_char_chara_char", "int*", ptr147_0, 4, "char", 20, "char*", ptr147_2, 4, "char", 20)) {
		printf("Test failed: The 'func_inta_char_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 20*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr148_0[] = {127, 126, 21, 127};
	char ptr148_2[] = {127, 126, 21, 127};
	char ptr148_3[] = {127, 126, 21, 127};
	if (!rfc_call("internal", "func_inta_char_chara_chara", "int*", ptr148_0, 4, "char", 21, "char*", ptr148_2, 4, "char*", ptr148_3, 4)) {
		printf("Test failed: The 'func_inta_char_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 21*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_char_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr149_0[] = {127, 126, 22, 127};
	char ptr149_1[] = {127, 126, 22, 127};
	if (!rfc_call("internal", "func_inta_chara", "int*", ptr149_0, 4, "char*", ptr149_1, 4)) {
		printf("Test failed: The 'func_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 22*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr150_0[] = {127, 126, 23, 127};
	char ptr150_1[] = {127, 126, 23, 127};
	if (!rfc_call("internal", "func_inta_chara_int", "int*", ptr150_0, 4, "char*", ptr150_1, 4, "int", 23)) {
		printf("Test failed: The 'func_inta_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 23*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr151_0[] = {127, 126, 24, 127};
	char ptr151_1[] = {127, 126, 24, 127};
	if (!rfc_call("internal", "func_inta_chara_int_int", "int*", ptr151_0, 4, "char*", ptr151_1, 4, "int", 24, "int", 24)) {
		printf("Test failed: The 'func_inta_chara_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 24*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr152_0[] = {127, 126, 25, 127};
	char ptr152_1[] = {127, 126, 25, 127};
	int ptr152_3[] = {127, 126, 25, 127};
	if (!rfc_call("internal", "func_inta_chara_int_inta", "int*", ptr152_0, 4, "char*", ptr152_1, 4, "int", 25, "int*", ptr152_3, 4)) {
		printf("Test failed: The 'func_inta_chara_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 25*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr153_0[] = {127, 126, 26, 127};
	char ptr153_1[] = {127, 126, 26, 127};
	if (!rfc_call("internal", "func_inta_chara_int_char", "int*", ptr153_0, 4, "char*", ptr153_1, 4, "int", 26, "char", 26)) {
		printf("Test failed: The 'func_inta_chara_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 26*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr154_0[] = {127, 126, 27, 127};
	char ptr154_1[] = {127, 126, 27, 127};
	char ptr154_3[] = {127, 126, 27, 127};
	if (!rfc_call("internal", "func_inta_chara_int_chara", "int*", ptr154_0, 4, "char*", ptr154_1, 4, "int", 27, "char*", ptr154_3, 4)) {
		printf("Test failed: The 'func_inta_chara_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 27*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr155_0[] = {127, 126, 28, 127};
	char ptr155_1[] = {127, 126, 28, 127};
	int ptr155_2[] = {127, 126, 28, 127};
	if (!rfc_call("internal", "func_inta_chara_inta", "int*", ptr155_0, 4, "char*", ptr155_1, 4, "int*", ptr155_2, 4)) {
		printf("Test failed: The 'func_inta_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 28*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr156_0[] = {127, 126, 29, 127};
	char ptr156_1[] = {127, 126, 29, 127};
	int ptr156_2[] = {127, 126, 29, 127};
	if (!rfc_call("internal", "func_inta_chara_inta_int", "int*", ptr156_0, 4, "char*", ptr156_1, 4, "int*", ptr156_2, 4, "int", 29)) {
		printf("Test failed: The 'func_inta_chara_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 29*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr157_0[] = {127, 126, 30, 127};
	char ptr157_1[] = {127, 126, 30, 127};
	int ptr157_2[] = {127, 126, 30, 127};
	int ptr157_3[] = {127, 126, 30, 127};
	if (!rfc_call("internal", "func_inta_chara_inta_inta", "int*", ptr157_0, 4, "char*", ptr157_1, 4, "int*", ptr157_2, 4, "int*", ptr157_3, 4)) {
		printf("Test failed: The 'func_inta_chara_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 30*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr158_0[] = {127, 126, 31, 127};
	char ptr158_1[] = {127, 126, 31, 127};
	int ptr158_2[] = {127, 126, 31, 127};
	if (!rfc_call("internal", "func_inta_chara_inta_char", "int*", ptr158_0, 4, "char*", ptr158_1, 4, "int*", ptr158_2, 4, "char", 31)) {
		printf("Test failed: The 'func_inta_chara_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 31*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr159_0[] = {127, 126, 32, 127};
	char ptr159_1[] = {127, 126, 32, 127};
	int ptr159_2[] = {127, 126, 32, 127};
	char ptr159_3[] = {127, 126, 32, 127};
	if (!rfc_call("internal", "func_inta_chara_inta_chara", "int*", ptr159_0, 4, "char*", ptr159_1, 4, "int*", ptr159_2, 4, "char*", ptr159_3, 4)) {
		printf("Test failed: The 'func_inta_chara_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 32*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr160_0[] = {127, 126, 33, 127};
	char ptr160_1[] = {127, 126, 33, 127};
	if (!rfc_call("internal", "func_inta_chara_char", "int*", ptr160_0, 4, "char*", ptr160_1, 4, "char", 33)) {
		printf("Test failed: The 'func_inta_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 33*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr161_0[] = {127, 126, 34, 127};
	char ptr161_1[] = {127, 126, 34, 127};
	if (!rfc_call("internal", "func_inta_chara_char_int", "int*", ptr161_0, 4, "char*", ptr161_1, 4, "char", 34, "int", 34)) {
		printf("Test failed: The 'func_inta_chara_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 34*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr162_0[] = {127, 126, 35, 127};
	char ptr162_1[] = {127, 126, 35, 127};
	int ptr162_3[] = {127, 126, 35, 127};
	if (!rfc_call("internal", "func_inta_chara_char_inta", "int*", ptr162_0, 4, "char*", ptr162_1, 4, "char", 35, "int*", ptr162_3, 4)) {
		printf("Test failed: The 'func_inta_chara_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 35*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr163_0[] = {127, 126, 36, 127};
	char ptr163_1[] = {127, 126, 36, 127};
	if (!rfc_call("internal", "func_inta_chara_char_char", "int*", ptr163_0, 4, "char*", ptr163_1, 4, "char", 36, "char", 36)) {
		printf("Test failed: The 'func_inta_chara_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 36*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr164_0[] = {127, 126, 37, 127};
	char ptr164_1[] = {127, 126, 37, 127};
	char ptr164_3[] = {127, 126, 37, 127};
	if (!rfc_call("internal", "func_inta_chara_char_chara", "int*", ptr164_0, 4, "char*", ptr164_1, 4, "char", 37, "char*", ptr164_3, 4)) {
		printf("Test failed: The 'func_inta_chara_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 37*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr165_0[] = {127, 126, 38, 127};
	char ptr165_1[] = {127, 126, 38, 127};
	char ptr165_2[] = {127, 126, 38, 127};
	if (!rfc_call("internal", "func_inta_chara_chara", "int*", ptr165_0, 4, "char*", ptr165_1, 4, "char*", ptr165_2, 4)) {
		printf("Test failed: The 'func_inta_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 38*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr166_0[] = {127, 126, 39, 127};
	char ptr166_1[] = {127, 126, 39, 127};
	char ptr166_2[] = {127, 126, 39, 127};
	if (!rfc_call("internal", "func_inta_chara_chara_int", "int*", ptr166_0, 4, "char*", ptr166_1, 4, "char*", ptr166_2, 4, "int", 39)) {
		printf("Test failed: The 'func_inta_chara_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 39*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr167_0[] = {127, 126, 40, 127};
	char ptr167_1[] = {127, 126, 40, 127};
	char ptr167_2[] = {127, 126, 40, 127};
	int ptr167_3[] = {127, 126, 40, 127};
	if (!rfc_call("internal", "func_inta_chara_chara_inta", "int*", ptr167_0, 4, "char*", ptr167_1, 4, "char*", ptr167_2, 4, "int*", ptr167_3, 4)) {
		printf("Test failed: The 'func_inta_chara_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 40*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr168_0[] = {127, 126, 41, 127};
	char ptr168_1[] = {127, 126, 41, 127};
	char ptr168_2[] = {127, 126, 41, 127};
	if (!rfc_call("internal", "func_inta_chara_chara_char", "int*", ptr168_0, 4, "char*", ptr168_1, 4, "char*", ptr168_2, 4, "char", 41)) {
		printf("Test failed: The 'func_inta_chara_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 41*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr169_0[] = {127, 126, 42, 127};
	char ptr169_1[] = {127, 126, 42, 127};
	char ptr169_2[] = {127, 126, 42, 127};
	char ptr169_3[] = {127, 126, 42, 127};
	if (!rfc_call("internal", "func_inta_chara_chara_chara", "int*", ptr169_0, 4, "char*", ptr169_1, 4, "char*", ptr169_2, 4, "char*", ptr169_3, 4)) {
		printf("Test failed: The 'func_inta_chara_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 42*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_inta_chara_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr174_3[] = {127, 126, 47, 127};
	if (!rfc_call("internal", "func_char_int_int_inta", "char", 47, "int", 47, "int", 47, "int*", ptr174_3, 4)) {
		printf("Test failed: The 'func_char_int_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 47*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr176_3[] = {127, 126, 49, 127};
	if (!rfc_call("internal", "func_char_int_int_chara", "char", 49, "int", 49, "int", 49, "char*", ptr176_3, 4)) {
		printf("Test failed: The 'func_char_int_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 49*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr177_2[] = {127, 126, 50, 127};
	if (!rfc_call("internal", "func_char_int_inta", "char", 50, "int", 50, "int*", ptr177_2, 4)) {
		printf("Test failed: The 'func_char_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 50*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr178_2[] = {127, 126, 51, 127};
	if (!rfc_call("internal", "func_char_int_inta_int", "char", 51, "int", 51, "int*", ptr178_2, 4, "int", 51)) {
		printf("Test failed: The 'func_char_int_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 51*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr179_2[] = {127, 126, 52, 127};
	int ptr179_3[] = {127, 126, 52, 127};
	if (!rfc_call("internal", "func_char_int_inta_inta", "char", 52, "int", 52, "int*", ptr179_2, 4, "int*", ptr179_3, 4)) {
		printf("Test failed: The 'func_char_int_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 52*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr180_2[] = {127, 126, 53, 127};
	if (!rfc_call("internal", "func_char_int_inta_char", "char", 53, "int", 53, "int*", ptr180_2, 4, "char", 53)) {
		printf("Test failed: The 'func_char_int_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 53*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr181_2[] = {127, 126, 54, 127};
	char ptr181_3[] = {127, 126, 54, 127};
	if (!rfc_call("internal", "func_char_int_inta_chara", "char", 54, "int", 54, "int*", ptr181_2, 4, "char*", ptr181_3, 4)) {
		printf("Test failed: The 'func_char_int_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 54*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr184_3[] = {127, 126, 57, 127};
	if (!rfc_call("internal", "func_char_int_char_inta", "char", 57, "int", 57, "char", 57, "int*", ptr184_3, 4)) {
		printf("Test failed: The 'func_char_int_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 57*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr186_3[] = {127, 126, 59, 127};
	if (!rfc_call("internal", "func_char_int_char_chara", "char", 59, "int", 59, "char", 59, "char*", ptr186_3, 4)) {
		printf("Test failed: The 'func_char_int_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 59*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr187_2[] = {127, 126, 60, 127};
	if (!rfc_call("internal", "func_char_int_chara", "char", 60, "int", 60, "char*", ptr187_2, 4)) {
		printf("Test failed: The 'func_char_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 60*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr188_2[] = {127, 126, 61, 127};
	if (!rfc_call("internal", "func_char_int_chara_int", "char", 61, "int", 61, "char*", ptr188_2, 4, "int", 61)) {
		printf("Test failed: The 'func_char_int_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 61*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr189_2[] = {127, 126, 62, 127};
	int ptr189_3[] = {127, 126, 62, 127};
	if (!rfc_call("internal", "func_char_int_chara_inta", "char", 62, "int", 62, "char*", ptr189_2, 4, "int*", ptr189_3, 4)) {
		printf("Test failed: The 'func_char_int_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 62*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr190_2[] = {127, 126, 63, 127};
	if (!rfc_call("internal", "func_char_int_chara_char", "char", 63, "int", 63, "char*", ptr190_2, 4, "char", 63)) {
		printf("Test failed: The 'func_char_int_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 63*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr191_2[] = {127, 126, 64, 127};
	char ptr191_3[] = {127, 126, 64, 127};
	if (!rfc_call("internal", "func_char_int_chara_chara", "char", 64, "int", 64, "char*", ptr191_2, 4, "char*", ptr191_3, 4)) {
		printf("Test failed: The 'func_char_int_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 64*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_int_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr192_1[] = {127, 126, 65, 127};
	if (!rfc_call("internal", "func_char_inta", "char", 65, "int*", ptr192_1, 4)) {
		printf("Test failed: The 'func_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 65*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr193_1[] = {127, 126, 66, 127};
	if (!rfc_call("internal", "func_char_inta_int", "char", 66, "int*", ptr193_1, 4, "int", 66)) {
		printf("Test failed: The 'func_char_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 66*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr194_1[] = {127, 126, 67, 127};
	if (!rfc_call("internal", "func_char_inta_int_int", "char", 67, "int*", ptr194_1, 4, "int", 67, "int", 67)) {
		printf("Test failed: The 'func_char_inta_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 67*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr195_1[] = {127, 126, 68, 127};
	int ptr195_3[] = {127, 126, 68, 127};
	if (!rfc_call("internal", "func_char_inta_int_inta", "char", 68, "int*", ptr195_1, 4, "int", 68, "int*", ptr195_3, 4)) {
		printf("Test failed: The 'func_char_inta_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 68*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr196_1[] = {127, 126, 69, 127};
	if (!rfc_call("internal", "func_char_inta_int_char", "char", 69, "int*", ptr196_1, 4, "int", 69, "char", 69)) {
		printf("Test failed: The 'func_char_inta_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 69*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr197_1[] = {127, 126, 70, 127};
	char ptr197_3[] = {127, 126, 70, 127};
	if (!rfc_call("internal", "func_char_inta_int_chara", "char", 70, "int*", ptr197_1, 4, "int", 70, "char*", ptr197_3, 4)) {
		printf("Test failed: The 'func_char_inta_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 70*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr198_1[] = {127, 126, 71, 127};
	int ptr198_2[] = {127, 126, 71, 127};
	if (!rfc_call("internal", "func_char_inta_inta", "char", 71, "int*", ptr198_1, 4, "int*", ptr198_2, 4)) {
		printf("Test failed: The 'func_char_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 71*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr199_1[] = {127, 126, 72, 127};
	int ptr199_2[] = {127, 126, 72, 127};
	if (!rfc_call("internal", "func_char_inta_inta_int", "char", 72, "int*", ptr199_1, 4, "int*", ptr199_2, 4, "int", 72)) {
		printf("Test failed: The 'func_char_inta_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 72*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr200_1[] = {127, 126, 73, 127};
	int ptr200_2[] = {127, 126, 73, 127};
	int ptr200_3[] = {127, 126, 73, 127};
	if (!rfc_call("internal", "func_char_inta_inta_inta", "char", 73, "int*", ptr200_1, 4, "int*", ptr200_2, 4, "int*", ptr200_3, 4)) {
		printf("Test failed: The 'func_char_inta_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 73*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr201_1[] = {127, 126, 74, 127};
	int ptr201_2[] = {127, 126, 74, 127};
	if (!rfc_call("internal", "func_char_inta_inta_char", "char", 74, "int*", ptr201_1, 4, "int*", ptr201_2, 4, "char", 74)) {
		printf("Test failed: The 'func_char_inta_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 74*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr202_1[] = {127, 126, 75, 127};
	int ptr202_2[] = {127, 126, 75, 127};
	char ptr202_3[] = {127, 126, 75, 127};
	if (!rfc_call("internal", "func_char_inta_inta_chara", "char", 75, "int*", ptr202_1, 4, "int*", ptr202_2, 4, "char*", ptr202_3, 4)) {
		printf("Test failed: The 'func_char_inta_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 75*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr203_1[] = {127, 126, 76, 127};
	if (!rfc_call("internal", "func_char_inta_char", "char", 76, "int*", ptr203_1, 4, "char", 76)) {
		printf("Test failed: The 'func_char_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 76*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr204_1[] = {127, 126, 77, 127};
	if (!rfc_call("internal", "func_char_inta_char_int", "char", 77, "int*", ptr204_1, 4, "char", 77, "int", 77)) {
		printf("Test failed: The 'func_char_inta_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 77*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr205_1[] = {127, 126, 78, 127};
	int ptr205_3[] = {127, 126, 78, 127};
	if (!rfc_call("internal", "func_char_inta_char_inta", "char", 78, "int*", ptr205_1, 4, "char", 78, "int*", ptr205_3, 4)) {
		printf("Test failed: The 'func_char_inta_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 78*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr206_1[] = {127, 126, 79, 127};
	if (!rfc_call("internal", "func_char_inta_char_char", "char", 79, "int*", ptr206_1, 4, "char", 79, "char", 79)) {
		printf("Test failed: The 'func_char_inta_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 79*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr207_1[] = {127, 126, 80, 127};
	char ptr207_3[] = {127, 126, 80, 127};
	if (!rfc_call("internal", "func_char_inta_char_chara", "char", 80, "int*", ptr207_1, 4, "char", 80, "char*", ptr207_3, 4)) {
		printf("Test failed: The 'func_char_inta_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 80*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr208_1[] = {127, 126, 81, 127};
	char ptr208_2[] = {127, 126, 81, 127};
	if (!rfc_call("internal", "func_char_inta_chara", "char", 81, "int*", ptr208_1, 4, "char*", ptr208_2, 4)) {
		printf("Test failed: The 'func_char_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 81*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr209_1[] = {127, 126, 82, 127};
	char ptr209_2[] = {127, 126, 82, 127};
	if (!rfc_call("internal", "func_char_inta_chara_int", "char", 82, "int*", ptr209_1, 4, "char*", ptr209_2, 4, "int", 82)) {
		printf("Test failed: The 'func_char_inta_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 82*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr210_1[] = {127, 126, 83, 127};
	char ptr210_2[] = {127, 126, 83, 127};
	int ptr210_3[] = {127, 126, 83, 127};
	if (!rfc_call("internal", "func_char_inta_chara_inta", "char", 83, "int*", ptr210_1, 4, "char*", ptr210_2, 4, "int*", ptr210_3, 4)) {
		printf("Test failed: The 'func_char_inta_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 83*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr211_1[] = {127, 126, 84, 127};
	char ptr211_2[] = {127, 126, 84, 127};
	if (!rfc_call("internal", "func_char_inta_chara_char", "char", 84, "int*", ptr211_1, 4, "char*", ptr211_2, 4, "char", 84)) {
		printf("Test failed: The 'func_char_inta_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 84*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr212_1[] = {127, 126, 85, 127};
	char ptr212_2[] = {127, 126, 85, 127};
	char ptr212_3[] = {127, 126, 85, 127};
	if (!rfc_call("internal", "func_char_inta_chara_chara", "char", 85, "int*", ptr212_1, 4, "char*", ptr212_2, 4, "char*", ptr212_3, 4)) {
		printf("Test failed: The 'func_char_inta_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 85*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_inta_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr216_3[] = {127, 126, 89, 127};
	if (!rfc_call("internal", "func_char_char_int_inta", "char", 89, "char", 89, "int", 89, "int*", ptr216_3, 4)) {
		printf("Test failed: The 'func_char_char_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 89*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr218_3[] = {127, 126, 91, 127};
	if (!rfc_call("internal", "func_char_char_int_chara", "char", 91, "char", 91, "int", 91, "char*", ptr218_3, 4)) {
		printf("Test failed: The 'func_char_char_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 91*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr219_2[] = {127, 126, 92, 127};
	if (!rfc_call("internal", "func_char_char_inta", "char", 92, "char", 92, "int*", ptr219_2, 4)) {
		printf("Test failed: The 'func_char_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 92*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr220_2[] = {127, 126, 93, 127};
	if (!rfc_call("internal", "func_char_char_inta_int", "char", 93, "char", 93, "int*", ptr220_2, 4, "int", 93)) {
		printf("Test failed: The 'func_char_char_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 93*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr221_2[] = {127, 126, 94, 127};
	int ptr221_3[] = {127, 126, 94, 127};
	if (!rfc_call("internal", "func_char_char_inta_inta", "char", 94, "char", 94, "int*", ptr221_2, 4, "int*", ptr221_3, 4)) {
		printf("Test failed: The 'func_char_char_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 94*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr222_2[] = {127, 126, 95, 127};
	if (!rfc_call("internal", "func_char_char_inta_char", "char", 95, "char", 95, "int*", ptr222_2, 4, "char", 95)) {
		printf("Test failed: The 'func_char_char_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 95*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr223_2[] = {127, 126, 96, 127};
	char ptr223_3[] = {127, 126, 96, 127};
	if (!rfc_call("internal", "func_char_char_inta_chara", "char", 96, "char", 96, "int*", ptr223_2, 4, "char*", ptr223_3, 4)) {
		printf("Test failed: The 'func_char_char_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 96*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	int ptr226_3[] = {127, 126, 99, 127};
	if (!rfc_call("internal", "func_char_char_char_inta", "char", 99, "char", 99, "char", 99, "int*", ptr226_3, 4)) {
		printf("Test failed: The 'func_char_char_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 99*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr228_3[] = {127, 126, 101, 127};
	if (!rfc_call("internal", "func_char_char_char_chara", "char", 101, "char", 101, "char", 101, "char*", ptr228_3, 4)) {
		printf("Test failed: The 'func_char_char_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 101*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr229_2[] = {127, 126, 102, 127};
	if (!rfc_call("internal", "func_char_char_chara", "char", 102, "char", 102, "char*", ptr229_2, 4)) {
		printf("Test failed: The 'func_char_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 102*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr230_2[] = {127, 126, 103, 127};
	if (!rfc_call("internal", "func_char_char_chara_int", "char", 103, "char", 103, "char*", ptr230_2, 4, "int", 103)) {
		printf("Test failed: The 'func_char_char_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 103*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr231_2[] = {127, 126, 104, 127};
	int ptr231_3[] = {127, 126, 104, 127};
	if (!rfc_call("internal", "func_char_char_chara_inta", "char", 104, "char", 104, "char*", ptr231_2, 4, "int*", ptr231_3, 4)) {
		printf("Test failed: The 'func_char_char_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 104*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr232_2[] = {127, 126, 105, 127};
	if (!rfc_call("internal", "func_char_char_chara_char", "char", 105, "char", 105, "char*", ptr232_2, 4, "char", 105)) {
		printf("Test failed: The 'func_char_char_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 105*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr233_2[] = {127, 126, 106, 127};
	char ptr233_3[] = {127, 126, 106, 127};
	if (!rfc_call("internal", "func_char_char_chara_chara", "char", 106, "char", 106, "char*", ptr233_2, 4, "char*", ptr233_3, 4)) {
		printf("Test failed: The 'func_char_char_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 106*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_char_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr234_1[] = {127, 126, 107, 127};
	if (!rfc_call("internal", "func_char_chara", "char", 107, "char*", ptr234_1, 4)) {
		printf("Test failed: The 'func_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 107*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr235_1[] = {127, 126, 108, 127};
	if (!rfc_call("internal", "func_char_chara_int", "char", 108, "char*", ptr235_1, 4, "int", 108)) {
		printf("Test failed: The 'func_char_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 108*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr236_1[] = {127, 126, 109, 127};
	if (!rfc_call("internal", "func_char_chara_int_int", "char", 109, "char*", ptr236_1, 4, "int", 109, "int", 109)) {
		printf("Test failed: The 'func_char_chara_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 109*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr237_1[] = {127, 126, 110, 127};
	int ptr237_3[] = {127, 126, 110, 127};
	if (!rfc_call("internal", "func_char_chara_int_inta", "char", 110, "char*", ptr237_1, 4, "int", 110, "int*", ptr237_3, 4)) {
		printf("Test failed: The 'func_char_chara_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 110*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr238_1[] = {127, 126, 111, 127};
	if (!rfc_call("internal", "func_char_chara_int_char", "char", 111, "char*", ptr238_1, 4, "int", 111, "char", 111)) {
		printf("Test failed: The 'func_char_chara_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 111*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr239_1[] = {127, 126, 112, 127};
	char ptr239_3[] = {127, 126, 112, 127};
	if (!rfc_call("internal", "func_char_chara_int_chara", "char", 112, "char*", ptr239_1, 4, "int", 112, "char*", ptr239_3, 4)) {
		printf("Test failed: The 'func_char_chara_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 112*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr240_1[] = {127, 126, 113, 127};
	int ptr240_2[] = {127, 126, 113, 127};
	if (!rfc_call("internal", "func_char_chara_inta", "char", 113, "char*", ptr240_1, 4, "int*", ptr240_2, 4)) {
		printf("Test failed: The 'func_char_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 113*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr241_1[] = {127, 126, 114, 127};
	int ptr241_2[] = {127, 126, 114, 127};
	if (!rfc_call("internal", "func_char_chara_inta_int", "char", 114, "char*", ptr241_1, 4, "int*", ptr241_2, 4, "int", 114)) {
		printf("Test failed: The 'func_char_chara_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 114*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr242_1[] = {127, 126, 115, 127};
	int ptr242_2[] = {127, 126, 115, 127};
	int ptr242_3[] = {127, 126, 115, 127};
	if (!rfc_call("internal", "func_char_chara_inta_inta", "char", 115, "char*", ptr242_1, 4, "int*", ptr242_2, 4, "int*", ptr242_3, 4)) {
		printf("Test failed: The 'func_char_chara_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 115*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr243_1[] = {127, 126, 116, 127};
	int ptr243_2[] = {127, 126, 116, 127};
	if (!rfc_call("internal", "func_char_chara_inta_char", "char", 116, "char*", ptr243_1, 4, "int*", ptr243_2, 4, "char", 116)) {
		printf("Test failed: The 'func_char_chara_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 116*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr244_1[] = {127, 126, 117, 127};
	int ptr244_2[] = {127, 126, 117, 127};
	char ptr244_3[] = {127, 126, 117, 127};
	if (!rfc_call("internal", "func_char_chara_inta_chara", "char", 117, "char*", ptr244_1, 4, "int*", ptr244_2, 4, "char*", ptr244_3, 4)) {
		printf("Test failed: The 'func_char_chara_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 117*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr245_1[] = {127, 126, 118, 127};
	if (!rfc_call("internal", "func_char_chara_char", "char", 118, "char*", ptr245_1, 4, "char", 118)) {
		printf("Test failed: The 'func_char_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 118*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr246_1[] = {127, 126, 119, 127};
	if (!rfc_call("internal", "func_char_chara_char_int", "char", 119, "char*", ptr246_1, 4, "char", 119, "int", 119)) {
		printf("Test failed: The 'func_char_chara_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 119*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr247_1[] = {127, 126, 120, 127};
	int ptr247_3[] = {127, 126, 120, 127};
	if (!rfc_call("internal", "func_char_chara_char_inta", "char", 120, "char*", ptr247_1, 4, "char", 120, "int*", ptr247_3, 4)) {
		printf("Test failed: The 'func_char_chara_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 120*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr248_1[] = {127, 126, 121, 127};
	if (!rfc_call("internal", "func_char_chara_char_char", "char", 121, "char*", ptr248_1, 4, "char", 121, "char", 121)) {
		printf("Test failed: The 'func_char_chara_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 121*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr249_1[] = {127, 126, 122, 127};
	char ptr249_3[] = {127, 126, 122, 127};
	if (!rfc_call("internal", "func_char_chara_char_chara", "char", 122, "char*", ptr249_1, 4, "char", 122, "char*", ptr249_3, 4)) {
		printf("Test failed: The 'func_char_chara_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 122*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr250_1[] = {127, 126, 123, 127};
	char ptr250_2[] = {127, 126, 123, 127};
	if (!rfc_call("internal", "func_char_chara_chara", "char", 123, "char*", ptr250_1, 4, "char*", ptr250_2, 4)) {
		printf("Test failed: The 'func_char_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 123*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr251_1[] = {127, 126, 124, 127};
	char ptr251_2[] = {127, 126, 124, 127};
	if (!rfc_call("internal", "func_char_chara_chara_int", "char", 124, "char*", ptr251_1, 4, "char*", ptr251_2, 4, "int", 124)) {
		printf("Test failed: The 'func_char_chara_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 124*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr252_1[] = {127, 126, 125, 127};
	char ptr252_2[] = {127, 126, 125, 127};
	int ptr252_3[] = {127, 126, 125, 127};
	if (!rfc_call("internal", "func_char_chara_chara_inta", "char", 125, "char*", ptr252_1, 4, "char*", ptr252_2, 4, "int*", ptr252_3, 4)) {
		printf("Test failed: The 'func_char_chara_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 125*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr253_1[] = {127, 126, 126, 127};
	char ptr253_2[] = {127, 126, 126, 127};
	if (!rfc_call("internal", "func_char_chara_chara_char", "char", 126, "char*", ptr253_1, 4, "char*", ptr253_2, 4, "char", 126)) {
		printf("Test failed: The 'func_char_chara_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 126*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr254_1[] = {127, 126, 0, 127};
	char ptr254_2[] = {127, 126, 0, 127};
	char ptr254_3[] = {127, 126, 0, 127};
	if (!rfc_call("internal", "func_char_chara_chara_chara", "char", 0, "char*", ptr254_1, 4, "char*", ptr254_2, 4, "char*", ptr254_3, 4)) {
		printf("Test failed: The 'func_char_chara_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 0*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_char_chara_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr255_0[] = {127, 126, 1, 127};
	if (!rfc_call("internal", "func_chara", "char*", ptr255_0, 4)) {
		printf("Test failed: The 'func_chara' call returned an error code");
		exit(1);
	}
	expected_value = 1*1;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr256_0[] = {127, 126, 2, 127};
	if (!rfc_call("internal", "func_chara_int", "char*", ptr256_0, 4, "int", 2)) {
		printf("Test failed: The 'func_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 2*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr257_0[] = {127, 126, 3, 127};
	if (!rfc_call("internal", "func_chara_int_int", "char*", ptr257_0, 4, "int", 3, "int", 3)) {
		printf("Test failed: The 'func_chara_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 3*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr258_0[] = {127, 126, 4, 127};
	if (!rfc_call("internal", "func_chara_int_int_int", "char*", ptr258_0, 4, "int", 4, "int", 4, "int", 4)) {
		printf("Test failed: The 'func_chara_int_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 4*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr259_0[] = {127, 126, 5, 127};
	int ptr259_3[] = {127, 126, 5, 127};
	if (!rfc_call("internal", "func_chara_int_int_inta", "char*", ptr259_0, 4, "int", 5, "int", 5, "int*", ptr259_3, 4)) {
		printf("Test failed: The 'func_chara_int_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 5*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr260_0[] = {127, 126, 6, 127};
	if (!rfc_call("internal", "func_chara_int_int_char", "char*", ptr260_0, 4, "int", 6, "int", 6, "char", 6)) {
		printf("Test failed: The 'func_chara_int_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 6*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr261_0[] = {127, 126, 7, 127};
	char ptr261_3[] = {127, 126, 7, 127};
	if (!rfc_call("internal", "func_chara_int_int_chara", "char*", ptr261_0, 4, "int", 7, "int", 7, "char*", ptr261_3, 4)) {
		printf("Test failed: The 'func_chara_int_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 7*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr262_0[] = {127, 126, 8, 127};
	int ptr262_2[] = {127, 126, 8, 127};
	if (!rfc_call("internal", "func_chara_int_inta", "char*", ptr262_0, 4, "int", 8, "int*", ptr262_2, 4)) {
		printf("Test failed: The 'func_chara_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 8*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr263_0[] = {127, 126, 9, 127};
	int ptr263_2[] = {127, 126, 9, 127};
	if (!rfc_call("internal", "func_chara_int_inta_int", "char*", ptr263_0, 4, "int", 9, "int*", ptr263_2, 4, "int", 9)) {
		printf("Test failed: The 'func_chara_int_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 9*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr264_0[] = {127, 126, 10, 127};
	int ptr264_2[] = {127, 126, 10, 127};
	int ptr264_3[] = {127, 126, 10, 127};
	if (!rfc_call("internal", "func_chara_int_inta_inta", "char*", ptr264_0, 4, "int", 10, "int*", ptr264_2, 4, "int*", ptr264_3, 4)) {
		printf("Test failed: The 'func_chara_int_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 10*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr265_0[] = {127, 126, 11, 127};
	int ptr265_2[] = {127, 126, 11, 127};
	if (!rfc_call("internal", "func_chara_int_inta_char", "char*", ptr265_0, 4, "int", 11, "int*", ptr265_2, 4, "char", 11)) {
		printf("Test failed: The 'func_chara_int_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 11*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr266_0[] = {127, 126, 12, 127};
	int ptr266_2[] = {127, 126, 12, 127};
	char ptr266_3[] = {127, 126, 12, 127};
	if (!rfc_call("internal", "func_chara_int_inta_chara", "char*", ptr266_0, 4, "int", 12, "int*", ptr266_2, 4, "char*", ptr266_3, 4)) {
		printf("Test failed: The 'func_chara_int_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 12*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr267_0[] = {127, 126, 13, 127};
	if (!rfc_call("internal", "func_chara_int_char", "char*", ptr267_0, 4, "int", 13, "char", 13)) {
		printf("Test failed: The 'func_chara_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 13*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr268_0[] = {127, 126, 14, 127};
	if (!rfc_call("internal", "func_chara_int_char_int", "char*", ptr268_0, 4, "int", 14, "char", 14, "int", 14)) {
		printf("Test failed: The 'func_chara_int_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 14*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr269_0[] = {127, 126, 15, 127};
	int ptr269_3[] = {127, 126, 15, 127};
	if (!rfc_call("internal", "func_chara_int_char_inta", "char*", ptr269_0, 4, "int", 15, "char", 15, "int*", ptr269_3, 4)) {
		printf("Test failed: The 'func_chara_int_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 15*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr270_0[] = {127, 126, 16, 127};
	if (!rfc_call("internal", "func_chara_int_char_char", "char*", ptr270_0, 4, "int", 16, "char", 16, "char", 16)) {
		printf("Test failed: The 'func_chara_int_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 16*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr271_0[] = {127, 126, 17, 127};
	char ptr271_3[] = {127, 126, 17, 127};
	if (!rfc_call("internal", "func_chara_int_char_chara", "char*", ptr271_0, 4, "int", 17, "char", 17, "char*", ptr271_3, 4)) {
		printf("Test failed: The 'func_chara_int_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 17*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr272_0[] = {127, 126, 18, 127};
	char ptr272_2[] = {127, 126, 18, 127};
	if (!rfc_call("internal", "func_chara_int_chara", "char*", ptr272_0, 4, "int", 18, "char*", ptr272_2, 4)) {
		printf("Test failed: The 'func_chara_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 18*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr273_0[] = {127, 126, 19, 127};
	char ptr273_2[] = {127, 126, 19, 127};
	if (!rfc_call("internal", "func_chara_int_chara_int", "char*", ptr273_0, 4, "int", 19, "char*", ptr273_2, 4, "int", 19)) {
		printf("Test failed: The 'func_chara_int_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 19*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr274_0[] = {127, 126, 20, 127};
	char ptr274_2[] = {127, 126, 20, 127};
	int ptr274_3[] = {127, 126, 20, 127};
	if (!rfc_call("internal", "func_chara_int_chara_inta", "char*", ptr274_0, 4, "int", 20, "char*", ptr274_2, 4, "int*", ptr274_3, 4)) {
		printf("Test failed: The 'func_chara_int_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 20*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr275_0[] = {127, 126, 21, 127};
	char ptr275_2[] = {127, 126, 21, 127};
	if (!rfc_call("internal", "func_chara_int_chara_char", "char*", ptr275_0, 4, "int", 21, "char*", ptr275_2, 4, "char", 21)) {
		printf("Test failed: The 'func_chara_int_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 21*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr276_0[] = {127, 126, 22, 127};
	char ptr276_2[] = {127, 126, 22, 127};
	char ptr276_3[] = {127, 126, 22, 127};
	if (!rfc_call("internal", "func_chara_int_chara_chara", "char*", ptr276_0, 4, "int", 22, "char*", ptr276_2, 4, "char*", ptr276_3, 4)) {
		printf("Test failed: The 'func_chara_int_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 22*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_int_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr277_0[] = {127, 126, 23, 127};
	int ptr277_1[] = {127, 126, 23, 127};
	if (!rfc_call("internal", "func_chara_inta", "char*", ptr277_0, 4, "int*", ptr277_1, 4)) {
		printf("Test failed: The 'func_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 23*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr278_0[] = {127, 126, 24, 127};
	int ptr278_1[] = {127, 126, 24, 127};
	if (!rfc_call("internal", "func_chara_inta_int", "char*", ptr278_0, 4, "int*", ptr278_1, 4, "int", 24)) {
		printf("Test failed: The 'func_chara_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 24*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr279_0[] = {127, 126, 25, 127};
	int ptr279_1[] = {127, 126, 25, 127};
	if (!rfc_call("internal", "func_chara_inta_int_int", "char*", ptr279_0, 4, "int*", ptr279_1, 4, "int", 25, "int", 25)) {
		printf("Test failed: The 'func_chara_inta_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 25*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr280_0[] = {127, 126, 26, 127};
	int ptr280_1[] = {127, 126, 26, 127};
	int ptr280_3[] = {127, 126, 26, 127};
	if (!rfc_call("internal", "func_chara_inta_int_inta", "char*", ptr280_0, 4, "int*", ptr280_1, 4, "int", 26, "int*", ptr280_3, 4)) {
		printf("Test failed: The 'func_chara_inta_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 26*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr281_0[] = {127, 126, 27, 127};
	int ptr281_1[] = {127, 126, 27, 127};
	if (!rfc_call("internal", "func_chara_inta_int_char", "char*", ptr281_0, 4, "int*", ptr281_1, 4, "int", 27, "char", 27)) {
		printf("Test failed: The 'func_chara_inta_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 27*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr282_0[] = {127, 126, 28, 127};
	int ptr282_1[] = {127, 126, 28, 127};
	char ptr282_3[] = {127, 126, 28, 127};
	if (!rfc_call("internal", "func_chara_inta_int_chara", "char*", ptr282_0, 4, "int*", ptr282_1, 4, "int", 28, "char*", ptr282_3, 4)) {
		printf("Test failed: The 'func_chara_inta_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 28*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr283_0[] = {127, 126, 29, 127};
	int ptr283_1[] = {127, 126, 29, 127};
	int ptr283_2[] = {127, 126, 29, 127};
	if (!rfc_call("internal", "func_chara_inta_inta", "char*", ptr283_0, 4, "int*", ptr283_1, 4, "int*", ptr283_2, 4)) {
		printf("Test failed: The 'func_chara_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 29*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr284_0[] = {127, 126, 30, 127};
	int ptr284_1[] = {127, 126, 30, 127};
	int ptr284_2[] = {127, 126, 30, 127};
	if (!rfc_call("internal", "func_chara_inta_inta_int", "char*", ptr284_0, 4, "int*", ptr284_1, 4, "int*", ptr284_2, 4, "int", 30)) {
		printf("Test failed: The 'func_chara_inta_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 30*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr285_0[] = {127, 126, 31, 127};
	int ptr285_1[] = {127, 126, 31, 127};
	int ptr285_2[] = {127, 126, 31, 127};
	int ptr285_3[] = {127, 126, 31, 127};
	if (!rfc_call("internal", "func_chara_inta_inta_inta", "char*", ptr285_0, 4, "int*", ptr285_1, 4, "int*", ptr285_2, 4, "int*", ptr285_3, 4)) {
		printf("Test failed: The 'func_chara_inta_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 31*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr286_0[] = {127, 126, 32, 127};
	int ptr286_1[] = {127, 126, 32, 127};
	int ptr286_2[] = {127, 126, 32, 127};
	if (!rfc_call("internal", "func_chara_inta_inta_char", "char*", ptr286_0, 4, "int*", ptr286_1, 4, "int*", ptr286_2, 4, "char", 32)) {
		printf("Test failed: The 'func_chara_inta_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 32*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr287_0[] = {127, 126, 33, 127};
	int ptr287_1[] = {127, 126, 33, 127};
	int ptr287_2[] = {127, 126, 33, 127};
	char ptr287_3[] = {127, 126, 33, 127};
	if (!rfc_call("internal", "func_chara_inta_inta_chara", "char*", ptr287_0, 4, "int*", ptr287_1, 4, "int*", ptr287_2, 4, "char*", ptr287_3, 4)) {
		printf("Test failed: The 'func_chara_inta_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 33*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr288_0[] = {127, 126, 34, 127};
	int ptr288_1[] = {127, 126, 34, 127};
	if (!rfc_call("internal", "func_chara_inta_char", "char*", ptr288_0, 4, "int*", ptr288_1, 4, "char", 34)) {
		printf("Test failed: The 'func_chara_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 34*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr289_0[] = {127, 126, 35, 127};
	int ptr289_1[] = {127, 126, 35, 127};
	if (!rfc_call("internal", "func_chara_inta_char_int", "char*", ptr289_0, 4, "int*", ptr289_1, 4, "char", 35, "int", 35)) {
		printf("Test failed: The 'func_chara_inta_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 35*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr290_0[] = {127, 126, 36, 127};
	int ptr290_1[] = {127, 126, 36, 127};
	int ptr290_3[] = {127, 126, 36, 127};
	if (!rfc_call("internal", "func_chara_inta_char_inta", "char*", ptr290_0, 4, "int*", ptr290_1, 4, "char", 36, "int*", ptr290_3, 4)) {
		printf("Test failed: The 'func_chara_inta_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 36*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr291_0[] = {127, 126, 37, 127};
	int ptr291_1[] = {127, 126, 37, 127};
	if (!rfc_call("internal", "func_chara_inta_char_char", "char*", ptr291_0, 4, "int*", ptr291_1, 4, "char", 37, "char", 37)) {
		printf("Test failed: The 'func_chara_inta_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 37*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr292_0[] = {127, 126, 38, 127};
	int ptr292_1[] = {127, 126, 38, 127};
	char ptr292_3[] = {127, 126, 38, 127};
	if (!rfc_call("internal", "func_chara_inta_char_chara", "char*", ptr292_0, 4, "int*", ptr292_1, 4, "char", 38, "char*", ptr292_3, 4)) {
		printf("Test failed: The 'func_chara_inta_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 38*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr293_0[] = {127, 126, 39, 127};
	int ptr293_1[] = {127, 126, 39, 127};
	char ptr293_2[] = {127, 126, 39, 127};
	if (!rfc_call("internal", "func_chara_inta_chara", "char*", ptr293_0, 4, "int*", ptr293_1, 4, "char*", ptr293_2, 4)) {
		printf("Test failed: The 'func_chara_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 39*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr294_0[] = {127, 126, 40, 127};
	int ptr294_1[] = {127, 126, 40, 127};
	char ptr294_2[] = {127, 126, 40, 127};
	if (!rfc_call("internal", "func_chara_inta_chara_int", "char*", ptr294_0, 4, "int*", ptr294_1, 4, "char*", ptr294_2, 4, "int", 40)) {
		printf("Test failed: The 'func_chara_inta_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 40*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr295_0[] = {127, 126, 41, 127};
	int ptr295_1[] = {127, 126, 41, 127};
	char ptr295_2[] = {127, 126, 41, 127};
	int ptr295_3[] = {127, 126, 41, 127};
	if (!rfc_call("internal", "func_chara_inta_chara_inta", "char*", ptr295_0, 4, "int*", ptr295_1, 4, "char*", ptr295_2, 4, "int*", ptr295_3, 4)) {
		printf("Test failed: The 'func_chara_inta_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 41*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr296_0[] = {127, 126, 42, 127};
	int ptr296_1[] = {127, 126, 42, 127};
	char ptr296_2[] = {127, 126, 42, 127};
	if (!rfc_call("internal", "func_chara_inta_chara_char", "char*", ptr296_0, 4, "int*", ptr296_1, 4, "char*", ptr296_2, 4, "char", 42)) {
		printf("Test failed: The 'func_chara_inta_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 42*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr297_0[] = {127, 126, 43, 127};
	int ptr297_1[] = {127, 126, 43, 127};
	char ptr297_2[] = {127, 126, 43, 127};
	char ptr297_3[] = {127, 126, 43, 127};
	if (!rfc_call("internal", "func_chara_inta_chara_chara", "char*", ptr297_0, 4, "int*", ptr297_1, 4, "char*", ptr297_2, 4, "char*", ptr297_3, 4)) {
		printf("Test failed: The 'func_chara_inta_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 43*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_inta_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr298_0[] = {127, 126, 44, 127};
	if (!rfc_call("internal", "func_chara_char", "char*", ptr298_0, 4, "char", 44)) {
		printf("Test failed: The 'func_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 44*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr299_0[] = {127, 126, 45, 127};
	if (!rfc_call("internal", "func_chara_char_int", "char*", ptr299_0, 4, "char", 45, "int", 45)) {
		printf("Test failed: The 'func_chara_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 45*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr300_0[] = {127, 126, 46, 127};
	if (!rfc_call("internal", "func_chara_char_int_int", "char*", ptr300_0, 4, "char", 46, "int", 46, "int", 46)) {
		printf("Test failed: The 'func_chara_char_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 46*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr301_0[] = {127, 126, 47, 127};
	int ptr301_3[] = {127, 126, 47, 127};
	if (!rfc_call("internal", "func_chara_char_int_inta", "char*", ptr301_0, 4, "char", 47, "int", 47, "int*", ptr301_3, 4)) {
		printf("Test failed: The 'func_chara_char_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 47*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr302_0[] = {127, 126, 48, 127};
	if (!rfc_call("internal", "func_chara_char_int_char", "char*", ptr302_0, 4, "char", 48, "int", 48, "char", 48)) {
		printf("Test failed: The 'func_chara_char_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 48*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr303_0[] = {127, 126, 49, 127};
	char ptr303_3[] = {127, 126, 49, 127};
	if (!rfc_call("internal", "func_chara_char_int_chara", "char*", ptr303_0, 4, "char", 49, "int", 49, "char*", ptr303_3, 4)) {
		printf("Test failed: The 'func_chara_char_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 49*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr304_0[] = {127, 126, 50, 127};
	int ptr304_2[] = {127, 126, 50, 127};
	if (!rfc_call("internal", "func_chara_char_inta", "char*", ptr304_0, 4, "char", 50, "int*", ptr304_2, 4)) {
		printf("Test failed: The 'func_chara_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 50*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr305_0[] = {127, 126, 51, 127};
	int ptr305_2[] = {127, 126, 51, 127};
	if (!rfc_call("internal", "func_chara_char_inta_int", "char*", ptr305_0, 4, "char", 51, "int*", ptr305_2, 4, "int", 51)) {
		printf("Test failed: The 'func_chara_char_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 51*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr306_0[] = {127, 126, 52, 127};
	int ptr306_2[] = {127, 126, 52, 127};
	int ptr306_3[] = {127, 126, 52, 127};
	if (!rfc_call("internal", "func_chara_char_inta_inta", "char*", ptr306_0, 4, "char", 52, "int*", ptr306_2, 4, "int*", ptr306_3, 4)) {
		printf("Test failed: The 'func_chara_char_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 52*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr307_0[] = {127, 126, 53, 127};
	int ptr307_2[] = {127, 126, 53, 127};
	if (!rfc_call("internal", "func_chara_char_inta_char", "char*", ptr307_0, 4, "char", 53, "int*", ptr307_2, 4, "char", 53)) {
		printf("Test failed: The 'func_chara_char_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 53*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr308_0[] = {127, 126, 54, 127};
	int ptr308_2[] = {127, 126, 54, 127};
	char ptr308_3[] = {127, 126, 54, 127};
	if (!rfc_call("internal", "func_chara_char_inta_chara", "char*", ptr308_0, 4, "char", 54, "int*", ptr308_2, 4, "char*", ptr308_3, 4)) {
		printf("Test failed: The 'func_chara_char_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 54*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr309_0[] = {127, 126, 55, 127};
	if (!rfc_call("internal", "func_chara_char_char", "char*", ptr309_0, 4, "char", 55, "char", 55)) {
		printf("Test failed: The 'func_chara_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 55*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr310_0[] = {127, 126, 56, 127};
	if (!rfc_call("internal", "func_chara_char_char_int", "char*", ptr310_0, 4, "char", 56, "char", 56, "int", 56)) {
		printf("Test failed: The 'func_chara_char_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 56*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr311_0[] = {127, 126, 57, 127};
	int ptr311_3[] = {127, 126, 57, 127};
	if (!rfc_call("internal", "func_chara_char_char_inta", "char*", ptr311_0, 4, "char", 57, "char", 57, "int*", ptr311_3, 4)) {
		printf("Test failed: The 'func_chara_char_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 57*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr312_0[] = {127, 126, 58, 127};
	if (!rfc_call("internal", "func_chara_char_char_char", "char*", ptr312_0, 4, "char", 58, "char", 58, "char", 58)) {
		printf("Test failed: The 'func_chara_char_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 58*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr313_0[] = {127, 126, 59, 127};
	char ptr313_3[] = {127, 126, 59, 127};
	if (!rfc_call("internal", "func_chara_char_char_chara", "char*", ptr313_0, 4, "char", 59, "char", 59, "char*", ptr313_3, 4)) {
		printf("Test failed: The 'func_chara_char_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 59*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr314_0[] = {127, 126, 60, 127};
	char ptr314_2[] = {127, 126, 60, 127};
	if (!rfc_call("internal", "func_chara_char_chara", "char*", ptr314_0, 4, "char", 60, "char*", ptr314_2, 4)) {
		printf("Test failed: The 'func_chara_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 60*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr315_0[] = {127, 126, 61, 127};
	char ptr315_2[] = {127, 126, 61, 127};
	if (!rfc_call("internal", "func_chara_char_chara_int", "char*", ptr315_0, 4, "char", 61, "char*", ptr315_2, 4, "int", 61)) {
		printf("Test failed: The 'func_chara_char_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 61*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr316_0[] = {127, 126, 62, 127};
	char ptr316_2[] = {127, 126, 62, 127};
	int ptr316_3[] = {127, 126, 62, 127};
	if (!rfc_call("internal", "func_chara_char_chara_inta", "char*", ptr316_0, 4, "char", 62, "char*", ptr316_2, 4, "int*", ptr316_3, 4)) {
		printf("Test failed: The 'func_chara_char_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 62*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr317_0[] = {127, 126, 63, 127};
	char ptr317_2[] = {127, 126, 63, 127};
	if (!rfc_call("internal", "func_chara_char_chara_char", "char*", ptr317_0, 4, "char", 63, "char*", ptr317_2, 4, "char", 63)) {
		printf("Test failed: The 'func_chara_char_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 63*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr318_0[] = {127, 126, 64, 127};
	char ptr318_2[] = {127, 126, 64, 127};
	char ptr318_3[] = {127, 126, 64, 127};
	if (!rfc_call("internal", "func_chara_char_chara_chara", "char*", ptr318_0, 4, "char", 64, "char*", ptr318_2, 4, "char*", ptr318_3, 4)) {
		printf("Test failed: The 'func_chara_char_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 64*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_char_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr319_0[] = {127, 126, 65, 127};
	char ptr319_1[] = {127, 126, 65, 127};
	if (!rfc_call("internal", "func_chara_chara", "char*", ptr319_0, 4, "char*", ptr319_1, 4)) {
		printf("Test failed: The 'func_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 65*2;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr320_0[] = {127, 126, 66, 127};
	char ptr320_1[] = {127, 126, 66, 127};
	if (!rfc_call("internal", "func_chara_chara_int", "char*", ptr320_0, 4, "char*", ptr320_1, 4, "int", 66)) {
		printf("Test failed: The 'func_chara_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 66*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr321_0[] = {127, 126, 67, 127};
	char ptr321_1[] = {127, 126, 67, 127};
	if (!rfc_call("internal", "func_chara_chara_int_int", "char*", ptr321_0, 4, "char*", ptr321_1, 4, "int", 67, "int", 67)) {
		printf("Test failed: The 'func_chara_chara_int_int' call returned an error code");
		exit(1);
	}
	expected_value = 67*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_int_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr322_0[] = {127, 126, 68, 127};
	char ptr322_1[] = {127, 126, 68, 127};
	int ptr322_3[] = {127, 126, 68, 127};
	if (!rfc_call("internal", "func_chara_chara_int_inta", "char*", ptr322_0, 4, "char*", ptr322_1, 4, "int", 68, "int*", ptr322_3, 4)) {
		printf("Test failed: The 'func_chara_chara_int_inta' call returned an error code");
		exit(1);
	}
	expected_value = 68*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_int_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr323_0[] = {127, 126, 69, 127};
	char ptr323_1[] = {127, 126, 69, 127};
	if (!rfc_call("internal", "func_chara_chara_int_char", "char*", ptr323_0, 4, "char*", ptr323_1, 4, "int", 69, "char", 69)) {
		printf("Test failed: The 'func_chara_chara_int_char' call returned an error code");
		exit(1);
	}
	expected_value = 69*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_int_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr324_0[] = {127, 126, 70, 127};
	char ptr324_1[] = {127, 126, 70, 127};
	char ptr324_3[] = {127, 126, 70, 127};
	if (!rfc_call("internal", "func_chara_chara_int_chara", "char*", ptr324_0, 4, "char*", ptr324_1, 4, "int", 70, "char*", ptr324_3, 4)) {
		printf("Test failed: The 'func_chara_chara_int_chara' call returned an error code");
		exit(1);
	}
	expected_value = 70*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_int_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr325_0[] = {127, 126, 71, 127};
	char ptr325_1[] = {127, 126, 71, 127};
	int ptr325_2[] = {127, 126, 71, 127};
	if (!rfc_call("internal", "func_chara_chara_inta", "char*", ptr325_0, 4, "char*", ptr325_1, 4, "int*", ptr325_2, 4)) {
		printf("Test failed: The 'func_chara_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 71*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr326_0[] = {127, 126, 72, 127};
	char ptr326_1[] = {127, 126, 72, 127};
	int ptr326_2[] = {127, 126, 72, 127};
	if (!rfc_call("internal", "func_chara_chara_inta_int", "char*", ptr326_0, 4, "char*", ptr326_1, 4, "int*", ptr326_2, 4, "int", 72)) {
		printf("Test failed: The 'func_chara_chara_inta_int' call returned an error code");
		exit(1);
	}
	expected_value = 72*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_inta_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr327_0[] = {127, 126, 73, 127};
	char ptr327_1[] = {127, 126, 73, 127};
	int ptr327_2[] = {127, 126, 73, 127};
	int ptr327_3[] = {127, 126, 73, 127};
	if (!rfc_call("internal", "func_chara_chara_inta_inta", "char*", ptr327_0, 4, "char*", ptr327_1, 4, "int*", ptr327_2, 4, "int*", ptr327_3, 4)) {
		printf("Test failed: The 'func_chara_chara_inta_inta' call returned an error code");
		exit(1);
	}
	expected_value = 73*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_inta_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr328_0[] = {127, 126, 74, 127};
	char ptr328_1[] = {127, 126, 74, 127};
	int ptr328_2[] = {127, 126, 74, 127};
	if (!rfc_call("internal", "func_chara_chara_inta_char", "char*", ptr328_0, 4, "char*", ptr328_1, 4, "int*", ptr328_2, 4, "char", 74)) {
		printf("Test failed: The 'func_chara_chara_inta_char' call returned an error code");
		exit(1);
	}
	expected_value = 74*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_inta_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr329_0[] = {127, 126, 75, 127};
	char ptr329_1[] = {127, 126, 75, 127};
	int ptr329_2[] = {127, 126, 75, 127};
	char ptr329_3[] = {127, 126, 75, 127};
	if (!rfc_call("internal", "func_chara_chara_inta_chara", "char*", ptr329_0, 4, "char*", ptr329_1, 4, "int*", ptr329_2, 4, "char*", ptr329_3, 4)) {
		printf("Test failed: The 'func_chara_chara_inta_chara' call returned an error code");
		exit(1);
	}
	expected_value = 75*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_inta_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr330_0[] = {127, 126, 76, 127};
	char ptr330_1[] = {127, 126, 76, 127};
	if (!rfc_call("internal", "func_chara_chara_char", "char*", ptr330_0, 4, "char*", ptr330_1, 4, "char", 76)) {
		printf("Test failed: The 'func_chara_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 76*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr331_0[] = {127, 126, 77, 127};
	char ptr331_1[] = {127, 126, 77, 127};
	if (!rfc_call("internal", "func_chara_chara_char_int", "char*", ptr331_0, 4, "char*", ptr331_1, 4, "char", 77, "int", 77)) {
		printf("Test failed: The 'func_chara_chara_char_int' call returned an error code");
		exit(1);
	}
	expected_value = 77*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_char_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr332_0[] = {127, 126, 78, 127};
	char ptr332_1[] = {127, 126, 78, 127};
	int ptr332_3[] = {127, 126, 78, 127};
	if (!rfc_call("internal", "func_chara_chara_char_inta", "char*", ptr332_0, 4, "char*", ptr332_1, 4, "char", 78, "int*", ptr332_3, 4)) {
		printf("Test failed: The 'func_chara_chara_char_inta' call returned an error code");
		exit(1);
	}
	expected_value = 78*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_char_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr333_0[] = {127, 126, 79, 127};
	char ptr333_1[] = {127, 126, 79, 127};
	if (!rfc_call("internal", "func_chara_chara_char_char", "char*", ptr333_0, 4, "char*", ptr333_1, 4, "char", 79, "char", 79)) {
		printf("Test failed: The 'func_chara_chara_char_char' call returned an error code");
		exit(1);
	}
	expected_value = 79*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_char_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr334_0[] = {127, 126, 80, 127};
	char ptr334_1[] = {127, 126, 80, 127};
	char ptr334_3[] = {127, 126, 80, 127};
	if (!rfc_call("internal", "func_chara_chara_char_chara", "char*", ptr334_0, 4, "char*", ptr334_1, 4, "char", 80, "char*", ptr334_3, 4)) {
		printf("Test failed: The 'func_chara_chara_char_chara' call returned an error code");
		exit(1);
	}
	expected_value = 80*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_char_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr335_0[] = {127, 126, 81, 127};
	char ptr335_1[] = {127, 126, 81, 127};
	char ptr335_2[] = {127, 126, 81, 127};
	if (!rfc_call("internal", "func_chara_chara_chara", "char*", ptr335_0, 4, "char*", ptr335_1, 4, "char*", ptr335_2, 4)) {
		printf("Test failed: The 'func_chara_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 81*3;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr336_0[] = {127, 126, 82, 127};
	char ptr336_1[] = {127, 126, 82, 127};
	char ptr336_2[] = {127, 126, 82, 127};
	if (!rfc_call("internal", "func_chara_chara_chara_int", "char*", ptr336_0, 4, "char*", ptr336_1, 4, "char*", ptr336_2, 4, "int", 82)) {
		printf("Test failed: The 'func_chara_chara_chara_int' call returned an error code");
		exit(1);
	}
	expected_value = 82*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_chara_int' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr337_0[] = {127, 126, 83, 127};
	char ptr337_1[] = {127, 126, 83, 127};
	char ptr337_2[] = {127, 126, 83, 127};
	int ptr337_3[] = {127, 126, 83, 127};
	if (!rfc_call("internal", "func_chara_chara_chara_inta", "char*", ptr337_0, 4, "char*", ptr337_1, 4, "char*", ptr337_2, 4, "int*", ptr337_3, 4)) {
		printf("Test failed: The 'func_chara_chara_chara_inta' call returned an error code");
		exit(1);
	}
	expected_value = 83*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_chara_inta' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr338_0[] = {127, 126, 84, 127};
	char ptr338_1[] = {127, 126, 84, 127};
	char ptr338_2[] = {127, 126, 84, 127};
	if (!rfc_call("internal", "func_chara_chara_chara_char", "char*", ptr338_0, 4, "char*", ptr338_1, 4, "char*", ptr338_2, 4, "char", 84)) {
		printf("Test failed: The 'func_chara_chara_chara_char' call returned an error code");
		exit(1);
	}
	expected_value = 84*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_chara_char' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	char ptr339_0[] = {127, 126, 85, 127};
	char ptr339_1[] = {127, 126, 85, 127};
	char ptr339_2[] = {127, 126, 85, 127};
	char ptr339_3[] = {127, 126, 85, 127};
	if (!rfc_call("internal", "func_chara_chara_chara_chara", "char*", ptr339_0, 4, "char*", ptr339_1, 4, "char*", ptr339_2, 4, "char*", ptr339_3, 4)) {
		printf("Test failed: The 'func_chara_chara_chara_chara' call returned an error code");
		exit(1);
	}
	expected_value = 85*4;
	if (global_value != expected_value) {
		printf("Test failed: The 'func_chara_chara_chara_chara' call did not change the global value as expected");
		printf("Expect: %d", expected_value);
		printf("Output: %d", global_value);
		exit(1);
	}

	return 1;
}

int main() {
	execute_expose();
	execute_test();
	return 0;
}
