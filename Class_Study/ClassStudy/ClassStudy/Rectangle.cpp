#include <iostream>
#include "Rectangle.h"

using std::cout;
using std::endl;

bool Rectangle::Init_Members(const Point &ul, const Point &lr) {
	if (ul.Get_X() > lr.Get_X() || ul.Get_Y() > lr.Get_Y()) {
		cout << "�߸��� ��ġ���� ����" << endl;
		
		return false;
	}

	upLeft = ul;
	lowRight = lr;

	return true;
}

void Rectangle::Show_Rec_Info() const {
	cout << "�� ���: " << '[' << upLeft.Get_X() << ", ";
	cout << upLeft.Get_Y() << ']' << endl;
	cout << "�� �ϴ�: " << '[' << lowRight.Get_X() << ", ";
	cout << lowRight.Get_Y() << ']' << endl << endl;
}