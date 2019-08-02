#include <iostream>
#include "Point.h"

using std::cout;
using std::endl;

bool Point::Init_Members(int xpos, int ypos) {
	if (xpos < 0 || ypos < 0) {
		cout << "��� ������ �� ����" << endl;
		
		return false;
	}

	x = xpos;
	y = ypos;

	return true;
}

int Point::Get_X() const { // const �Լ�
	return x;
}

int Point::Get_Y() const { // const �Լ�
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