#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

void Make_Histogram(char buf[]) { // 히스토그램을 만들고 그리는 함수
	int histoData[26]; // 알파벳 26개 저장
	int cnt = 0; // 알파벳 세는 변수
	int len; // 문자열 길이저장
	int index; // 히스토데이터에 들어갈 인덱스
	char alphabet; // 알파벳 표시할 변수

	for (int i = 0; i < 26; i++) { // 0으로 모두 초기화
		histoData[i] = 0;
	}

	len = strlen(buf);

	for (int i = 0; i < len; i++) {
		if ('a' <= buf[i] && buf[i] <= 'z') { // 소문자 알파벳 범위에 들어가면
			index = buf[i] - 'a';
			histoData[index]++; // 해당 데이터인덱스를 증가시킴
			cnt++; // 알파벳 수 증가시킴
		}
		else if ('A' <= buf[i] && buf[i] <= 'Z') { // 대문자 알파벳 범위에 들어가면
			index = buf[i] - 'A';
			histoData[index]++;
			cnt++;
		}
	}

	cout << "총 알파벳 수 " << cnt << endl << endl; // 총 알파벳 수 출력

	for (int i = 0; i < 26; i++) { // 히스토그램을 그림
		alphabet = 'a' + i;

		cout << alphabet << "  (" << histoData[i] << ")	:  ";
		
		for (int j = 0; j < histoData[i]; j++) {
			cout << "*"; // 히스토그램을 * 로 표현
		}

		cout << "\n";
	}
}

void Write(char buf[], int size) { // 문자열 버퍼를 채우는 함수
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(buf, size, ';');
}

int main(void) {
	char buf[10000]; // 버퍼 저장할 배열
	int size; // 배열의 크기 전달

	size = sizeof(buf); // 배열의 크기 계산

	Write(buf, size);
	Make_Histogram(buf);

	return 0;
}