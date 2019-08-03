#include <iostream>
#include "Point.h"

using std::cout;
using std::endl;

Point::Point(const int& xpos, const int& ypos) {
	x = xpos;
	y = ypos;
}

int Point::Get_X() const {
	return x;
}

int Point::Get_Y() const{
	return y;
}

bool Point::Set_X(int xpos) {
	if (0 > xpos || xpos > 100) {
		cout << "��� ������ �� ����" << endl;

		return false;
	}

	x = xpos;

	return true;
}

bool Point::Set_Y(int ypos) {
	if (0 > ypos || ypos > 100) {
		cout << "��� ������ �� ����" << endl;

		return false;
	}

	y = ypos;

	return true;
}