#include <iostream>
#include "Rectangle.h"

using std::cout;
using std::endl;

Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
	:upLeft(x1, y1), lowRight(x2, y2) { // ��� �̴ϼȶ�����
	// Empty
}

void Rectangle::Show_Rec_Info() const {
	cout << "�� ���: " << '[' << upLeft.Get_X() << ", ";
	cout << upLeft.Get_Y() << ']' << endl;
	cout << "�� �ϴ�: " << '[' << lowRight.Get_X() << ", ";
	cout << lowRight.Get_Y() << ']' << endl << endl;
}