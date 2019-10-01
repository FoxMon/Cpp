#ifndef __MORSE__H_
#define __MORSE__H_
#include <string>

using std::string;

class Morse { // Ŭ���� �����
private:
	string alphabet[26]; // ���ĺ��� �𸣽� ��ȣ ����
	string digit[10]; // ������ �𸣽� ��ȣ ����
	string slash, question, comma, period, plus, equal; // Ư�� ������ �𸣽� ��ȣ ����

public:
	Morse(); // ������ ����
	void textToMorse(string text, string& morse); // ���� �ؽ�Ʈ�� �𸣽� ��ȣ�� ��ȯ�ϴ� �Լ� ����
	bool morseToText(string morse, string& text); // �𸣽� ��ȣ�� ���� �ؽ�Ʈ�� ��ȯ�ϴ� �Լ� ����
};
#endif