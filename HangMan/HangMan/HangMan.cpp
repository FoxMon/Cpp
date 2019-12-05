#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::ifstream;
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

void fileRead(vector<string>& wordVector, ifstream& fin) { // 파일 읽기
	string word;

	while (getline(fin, word)) {
		wordVector.push_back(word); // vector에 복사
	}
}

string randomWord(vector<string>& wordVector) { // 랜덤 단어 생성
	int random;

	srand((unsigned)time(NULL));
	random = rand() % 25143; // Data 25143개

	return wordVector[random];
}

void checkWord(string word) { // 게임 시작
	int ranIdx1;
	int ranIdx2;
	int count = 0;
	char answer;
	string temp = word;

	srand((unsigned)time(NULL)); // 두 알파벳만 가린다고 설정
	ranIdx1 = rand() % word.length();
	word[ranIdx1] = '-'; // '-' 문자로 숨김
	ranIdx2 = rand() % word.length();
	word[ranIdx2] = '-';

	while (true) {
		for (int i = 0; i < word.length(); i++) { // 가린 문자 출력
			cout << word[i];
		}
		cout << endl;

		cout << ">>";
		cin >> answer;

		if (answer == temp[ranIdx1]) {
			word[ranIdx1] = answer;
			ranIdx1 = ranIdx2; // 중복 방지
		}
		else if (answer == temp[ranIdx2]) {
			word[ranIdx2] = answer;
			ranIdx2 = ranIdx1; // 중복 방지
		}
		else {
			count++;
		}

		if (count == 5) { // 기회 5번줌
			cout << "Fail..." << endl;
			cout << temp << endl;
			break;
		}

		if (word == temp) {
			cout << word << endl;

			break;
		}
	}
}

int main(void) {
	vector<string> wordVector;
	ifstream fin("C:\\Users\\Ho\\Desktop\\words.txt"); // 파일 생성
	string ranStr;
	string next;

	if (!fin) { // file open check
		cout << "File open error...";

		return 0;
	}

	fileRead(wordVector, fin); // vector에 카피

	cout << "Game Start..!!!" << endl << endl;

	while (true) {
		ranStr = randomWord(wordVector);
		// cout << ranStr << endl; // 정답공개 매너
		checkWord(ranStr);
		cout << "Next(y/n)?";
		cin >> next;

		if (next == "n") {
			break;
		}
	}
}