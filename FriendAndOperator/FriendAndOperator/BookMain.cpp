#include "Book.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(void) {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	string s;

	cout << "å �̸� �Է�: ";
	getline(cin, s, '\n');

	if (s < a) {
		cout << a.getTitle() << "�� " << s << "���� �ڿ� �ֱ���!" << endl;
	}

	a += 500;
	b -= 500;

	a.show();
	b.show();

	Book p("��ǰ C++", 30000, 500), q("��ǰ C++", 30000, 500);

	if (p == 30000) {
		cout << "���� 30000��" << endl;
	}

	if (p == "��ǰ C++") {
		cout << "��ǰ C++ �Դϴ�." << endl;
	}

	if (p == q) {
		cout << "�� å�� ���� å�Դϴ�." << endl;
	}

	Book c("�������", 0, 50);

	if (!c) {
		cout << "��¥��" << endl;
	}

	return 0;
}	