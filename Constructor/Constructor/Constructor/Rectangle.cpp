#include <iostream>
#include "Rectangle.h"

using std::cout;
using std::endl;

Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
	:upLeft(x1, y1), lowRight(x2, y2) { // 멤버 이니셜라이저
	// Empty
}

void Rectangle::Show_Rec_Info() const {
	cout << "좌 상단: " << '[' << upLeft.Get_X() << ", ";
	cout << upLeft.Get_Y() << ']' << endl;
	cout << "우 하단: " << '[' << lowRight.Get_X() << ", ";
	cout << lowRight.Get_Y() << ']' << endl << endl;
}