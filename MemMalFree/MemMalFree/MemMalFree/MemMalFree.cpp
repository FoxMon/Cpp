#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <stdlib.h>

using std::cout;
using std::endl;

char* MakeStrAdr(int len) {
	char* str = (char*)malloc(sizeof(char) * len); // �޸� �� ������ �Ҵ�

	return str;
}

int main(void) {
	char* str = MakeStrAdr(20);

	strcpy(str, "I'm so happy~");

	cout << str << endl;

	free(str);

	return 0;
}