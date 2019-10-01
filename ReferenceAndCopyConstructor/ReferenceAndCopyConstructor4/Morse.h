#ifndef __MORSE__H_
#define __MORSE__H_
#include <string>

using std::string;

class Morse { // 클래스 선언부
private:
	string alphabet[26]; // 알파벳의 모르스 부호 저장
	string digit[10]; // 숫자의 모르스 부호 저장
	string slash, question, comma, period, plus, equal; // 특수 문자의 모르스 부호 저장

public:
	Morse(); // 생성자 선언
	void textToMorse(string text, string& morse); // 영문 텍스트를 모르스 부호로 변환하는 함수 선언
	bool morseToText(string morse, string& text); // 모르스 부호를 영문 텍스트로 변환하는 함수 선언
};
#endif