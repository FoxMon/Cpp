#include "Morse.h"
#include <locale>

// Ŭ���� ������

Morse::Morse() { // ������ ���� ( alphabet, digit �迭 �� Ư�� ������ �𸣽� ��ȣ �ʱ�ȭ )
	alphabet[0] = ".-"; alphabet[1] = "-..."; alphabet[2] = "-.-."; alphabet[3] = "-.."; alphabet[4] = "."; // ���ĺ��� �𸣽� ��ȣ�� �ʱ�ȭ
	alphabet[5] = "..-."; alphabet[6] = "--."; alphabet[7] = "...."; alphabet[8] = ".."; alphabet[9] = ".---";
	alphabet[10] = "-.-"; alphabet[11] = ".-.."; alphabet[12] = "--"; alphabet[13] = "-."; alphabet[14] = "---";
	alphabet[15] = ".--."; alphabet[16] = "--.-"; alphabet[17] = ".-."; alphabet[18] = "..."; alphabet[19] = "-";
	alphabet[20] = "..-"; alphabet[21] = "...-"; alphabet[22] = ".--"; alphabet[23] = "-..-"; alphabet[24] = "-.--";
	alphabet[25] = "--..";

	digit[0] = "-----"; digit[1] = ".----"; digit[2] = "..---"; digit[3] = "...--"; digit[4] = "....-"; // ���ڸ� �𸣽� ��ȣ�� �ʱ�ȭ
	digit[5] = "....."; digit[6] = "-...."; digit[7] = "--..."; digit[8] = "---.."; digit[9] = "----.";

	slash = "-..-."; question = "..--.."; comma = "--..--"; period = ".-.-.-"; // Ư����ȣ�� �𸣽� ��ȣ�� �ʱ�ȭ
	plus = ".-.-."; equal = "-...-";
}

void Morse::textToMorse(string text, string& morse) { // ���� �ؽ�Ʈ�� �𸣽� ��ȣ�� ��ȯ�ϴ� �Լ� ����
	for (int i = 0; i < text.length(); i++) {
		char temp = text.at(i); // �������� characterŸ���� ���� temp��  text�� ���� �ϳ��� �ʱ�ȭ �ϰ�, 
		
		switch (temp) { // �ش��ϴ� case�� ���� ����
		case '/':
			morse = morse + slash + " ";
			break;
		case '?':
			morse = morse + question + " ";
			break;
		case ',':
			morse = morse + comma + " ";
			break;
		case '.':
			morse = morse + period + " ";
			break;
		case '+':
			morse = morse + plus + " ";
			break;
		case '=':
			morse = morse + equal + " ";
			break;
		default: // �� ���� ���
			if (isdigit(text[i])) { // ������ ��쿡��
				morse = morse + digit[temp - 48] + " "; // ������ ASCII�ڵ常ŭ ���༭ �ش� �ε������� �����ϴ� ��ȣ �־���
			}
			else if (isalpha(text[i])) { // ���ĺ��� ��쿡�� ����������
				if (islower(text[i])) { // �ҹ����� ���
					morse = morse + alphabet[temp - 97] + " "; // �ش� �ƽ�Ű�ڵ��� ������ ������ ���� ���� ( �ε��� ������Ŵ)
				}
				else { // �빮���� ���
					morse = morse + alphabet[temp - 65] + " "; // ��������
				}
			}
			else if (temp == ' ') { // sapce�� ���
				morse = morse +  "   "; // space3���� �־��ش�
			}
		}
	}
}

bool Morse::morseToText(string morse, string& text) { // �𸣽� ��ȣ�� ���� �ؽ�Ʈ�� ��ȯ
	string tempMorse; // �ؽ�Ʈ���ڸ� �ӽ÷� �𸣽� ��ȣ�� �ٲ� ����

	textToMorse(text, tempMorse); // �𸣽� ��ȣ�� ��ȯ ��

	if (tempMorse.compare(morse) == 0) { // �Ű����� morse�� ���ٸ�
		return true; // true return
	}

	return false; // �ٸ���� false
}