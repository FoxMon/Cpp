#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <stdlib.h>

using std::cout;
using std::endl;

char* MakeStrAdr(int len) {
	char* str = (char*)malloc(sizeof(char) * len); // 메모리 힙 영역에 할당

	return str;
}

int main(void) {
	char* str = MakeStrAdr(20);

	strcpy(str, "I'm so happy~");

	cout << str << endl;

	free(str);

	return 0;
}