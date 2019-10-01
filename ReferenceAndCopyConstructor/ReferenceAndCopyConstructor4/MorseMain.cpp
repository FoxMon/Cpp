#include "Morse.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	string text; // �ؽ�Ʈ�� �Է¹��� ����
	string morse; // �𸣽� ��ȣ�� ������ ����
	Morse morInstance; // MorseŬ���� mor ��ü ����

	cout << "�Ʒ��� ���� �ؽ�Ʈ�� �Է��ϼ���. �𸣽� ��ȣ�� �ٲߴϴ�." << endl;
	getline(cin, text, '\n'); // ������ �����Ͽ� ���ڿ� ����
	morInstance.textToMorse(text, morse); // ���� �ؽ�Ʈ�� �𸣽� ��ȣ�� ��ȯ
	cout << morse << endl << endl;

	cout << "�𸣽� ��ȣ�� �ٽ� ���� �ؽ�Ʈ�� �ٲߴϴ�." << endl;
	if (morInstance.morseToText(morse, text)) {
		cout << text << endl;
	}
	else {
		cout << "���� �ؽ�Ʈ�� ��ȯ�ϴµ� �����߽��ϴ�. ( ���ڿ��� �ٸ��ϴ�. )" << endl;
	}

	return 0;
}