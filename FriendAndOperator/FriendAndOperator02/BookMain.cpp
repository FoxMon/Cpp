#include "Book.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);

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

	return 0;
}