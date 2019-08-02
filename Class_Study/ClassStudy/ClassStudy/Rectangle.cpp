#include <iostream>
#include "Rectangle.h"

using std::cout;
using std::endl;

bool Rectangle::Init_Members(const Point &ul, const Point &lr) {
	if (ul.Get_X() > lr.Get_X() || ul.Get_Y() > lr.Get_Y()) {
		cout << "잘못된 위치정보 전달" << endl;
		
		return false;
	}

	upLeft = ul;
	lowRight = lr;

	return true;
}

void Rectangle::Show_Rec_Info() const {
	cout << "좌 상단: " << '[' << upLeft.Get_X() << ", ";
	cout << upLeft.Get_Y() << ']' << endl;
	cout << "우 하단: " << '[' << lowRight.Get_X() << ", ";
	cout << lowRight.Get_Y() << ']' << endl << endl;
}