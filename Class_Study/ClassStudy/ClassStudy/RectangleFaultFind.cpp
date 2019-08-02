#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using std::cout;
using std::endl;

int main(void) {
	Point pos1;

	if (!pos1.Init_Members(-2, 4)) {
		cout << "�ʱ�ȭ ����" << endl;
	}

	if (!pos1.Init_Members(2, 4)) {
		cout << "�ʱ�ȭ ����" << endl;
	}

	Point pos2;

	if (!pos2.Init_Members(5, 9)) {
		cout << "�ʱ�ȭ ����" << endl;
	}

	Rectangle rec;

	if (!rec.Init_Members(pos2, pos1)) {
		cout << "���簢�� �ʱ�ȭ ����" << endl;
	}

	if (!rec.Init_Members(pos1, pos2)) {
		cout << "���簢�� �ʱ�ȭ ����" << endl;
	}

	rec.Show_Rec_Info();

	return 0;
}