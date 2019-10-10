#include "Book.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(void) {
	Book a("청춘", 20000, 300), b("미래", 30000, 500);
	string s;

	cout << "책 이름 입력: ";
	getline(cin, s, '\n');

	if (s < a) {
		cout << a.getTitle() << "이 " << s << "보다 뒤에 있구나!" << endl;
	}

	a += 500;
	b -= 500;

	a.show();
	b.show();

	Book p("명품 C++", 30000, 500), q("고품 C++", 30000, 500);

	if (p == 30000) {
		cout << "정가 30000원" << endl;
	}

	if (p == "명품 C++") {
		cout << "명품 C++ 입니다." << endl;
	}

	if (p == q) {
		cout << "두 책이 같은 책입니다." << endl;
	}

	Book c("벼룩시장", 0, 50);

	if (!c) {
		cout << "공짜다" << endl;
	}

	return 0;
}	