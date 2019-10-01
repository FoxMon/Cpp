#include "Morse.h"
#include <locale>

// 클래스 구현부

Morse::Morse() { // 생성자 정의 ( alphabet, digit 배열 및 특수 문자의 모르스 부호 초기화 )
	alphabet[0] = ".-"; alphabet[1] = "-..."; alphabet[2] = "-.-."; alphabet[3] = "-.."; alphabet[4] = "."; // 알파벳을 모르스 부호로 초기화
	alphabet[5] = "..-."; alphabet[6] = "--."; alphabet[7] = "...."; alphabet[8] = ".."; alphabet[9] = ".---";
	alphabet[10] = "-.-"; alphabet[11] = ".-.."; alphabet[12] = "--"; alphabet[13] = "-."; alphabet[14] = "---";
	alphabet[15] = ".--."; alphabet[16] = "--.-"; alphabet[17] = ".-."; alphabet[18] = "..."; alphabet[19] = "-";
	alphabet[20] = "..-"; alphabet[21] = "...-"; alphabet[22] = ".--"; alphabet[23] = "-..-"; alphabet[24] = "-.--";
	alphabet[25] = "--..";

	digit[0] = "-----"; digit[1] = ".----"; digit[2] = "..---"; digit[3] = "...--"; digit[4] = "....-"; // 숫자를 모르스 부호로 초기화
	digit[5] = "....."; digit[6] = "-...."; digit[7] = "--..."; digit[8] = "---.."; digit[9] = "----.";

	slash = "-..-."; question = "..--.."; comma = "--..--"; period = ".-.-.-"; // 특수부호를 모르스 부호로 초기화
	plus = ".-.-."; equal = "-...-";
}

void Morse::textToMorse(string text, string& morse) { // 영문 텍스트를 모르스 부호로 변환하는 함수 정의
	for (int i = 0; i < text.length(); i++) {
		char temp = text.at(i); // 지역변수 character타입의 변수 temp를  text의 문자 하나로 초기화 하고, 
		
		switch (temp) { // 해당하는 case의 문장 실행
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
		default: // 그 외의 경우
			if (isdigit(text[i])) { // 숫자인 경우에는
				morse = morse + digit[temp - 48] + " "; // 숫자의 ASCII코드만큼 빼줘서 해당 인덱스값에 대응하는 부호 넣어줌
			}
			else if (isalpha(text[i])) { // 알파벳인 경우에도 마찬가지로
				if (islower(text[i])) { // 소문자인 경우
					morse = morse + alphabet[temp - 97] + " "; // 해당 아스키코드의 범위에 들어가도록 값을 빼줌 ( 인덱스 대응시킴)
				}
				else { // 대문자인 경우
					morse = morse + alphabet[temp - 65] + " "; // 마찬가지
				}
			}
			else if (temp == ' ') { // sapce의 경우
				morse = morse +  "   "; // space3개를 넣어준다
			}
		}
	}
}

bool Morse::morseToText(string morse, string& text) { // 모르스 부호를 영문 텍스트로 변환
	string tempMorse; // 텍스트문자를 임시로 모르스 부호로 바꿀 변수

	textToMorse(text, tempMorse); // 모르스 부호로 변환 후

	if (tempMorse.compare(morse) == 0) { // 매개변수 morse와 같다면
		return true; // true return
	}

	return false; // 다른경우 false
}