#include "Morse.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	string text; // 텍스트를 입력받을 변수
	string morse; // 모르스 부호를 저장할 변수
	Morse morInstance; // Morse클래스 mor 객체 생성

	cout << "아래에 영문 텍스트를 입력하세요. 모르스 부호로 바꿉니다." << endl;
	getline(cin, text, '\n'); // 공백을 포함하여 문자열 받음
	morInstance.textToMorse(text, morse); // 영문 텍스트를 모르스 부호로 변환
	cout << morse << endl << endl;

	cout << "모르스 부호를 다시 영문 텍스트로 바꿉니다." << endl;
	if (morInstance.morseToText(morse, text)) {
		cout << text << endl;
	}
	else {
		cout << "영문 텍스트로 변환하는데 실패했습니다. ( 문자열이 다릅니다. )" << endl;
	}

	return 0;
}