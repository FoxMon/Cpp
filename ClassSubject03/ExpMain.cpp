#include <iostream>
#include "Exp.h"

using std::endl;
using std::cout;

int main(void) {
	Exp a(3, 2); // 3�� ������ 9, ���̽� 3, ���� 2
	Exp b(9); // 9�� 1���� 9, ���̽� 9, ���� 1
	Exp c; // 1�� ������ 1, ���̽� 1, ���� 1

	cout << a.getValue() << " " << b.getValue() << " " << c.getValue() << endl;
	cout << "a�� ���̽� " << a.getBase() << ", " << "���� " << a.getExp() << endl;

	if (a.equals(b)) {
		cout << "same" << endl;
	}
	else {
		cout << "not same" << endl;
	}

	return 0;
}