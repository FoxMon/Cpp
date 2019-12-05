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

void fileRead(vector<string>& wordVector, ifstream& fin) {
	string word;

	while (getline(fin, word)) {
		wordVector.push_back(word);
	}
}

string randomWord(vector<string>& wordVector) {
	int random;

	srand((unsigned)time(NULL));
	random = rand() % 25143;
	
	return wordVector[random];
}

void checkWord(string word) {
	int ranIdx1;
	int ranIdx2;
	int count = 0;
	char answer;
	string temp = word;

	srand((unsigned)time(NULL));
	ranIdx1 = rand() % word.length();
	word[ranIdx1] = '-';
	ranIdx2 = rand() % word.length();
	word[ranIdx2] = '-';

	while (true) {
		for (int i = 0; i < word.length(); i++) {
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

		if (count == 5) {
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
	ifstream fin("C:\\Users\\김준호\\Desktop\\words.txt");
	string ranStr;
	string next;

	if (!fin) {
		cout << "File open error...";

		return 0;
	}

	fileRead(wordVector, fin);

	cout << "Game Start..!!!" << endl << endl;

	while (true) {
		ranStr = randomWord(wordVector);
		cout << ranStr << endl << endl;
		checkWord(ranStr);
		cout << "Next(y/n)?";
		cin >> next;

		if (next == "n") {
			break;
		}
	}
}