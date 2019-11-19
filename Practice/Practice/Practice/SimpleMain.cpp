#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void get1() {
	cout << "cin.get()로 <Enter> 키까지 입력 받고 출력합니다.>> ";

	int ch;

	while ((ch = cin.get()) != EOF) {
		cout.put(ch);

		if (ch == '\n') {
			break;
		}
	}
}

void get2() {
	cout << "cin.get(char&)로 <Enter> 키까지 입력 받고 출력합니다.>> ";

	char ch;

	while (true) {
		cin.get(ch);

		if (cin.eof()) {
			break;
		}

		cout.put(ch);

		if (ch == '\n') {
			break;
		}
	}
}

int main(void) {
	get1();
	get2();
}