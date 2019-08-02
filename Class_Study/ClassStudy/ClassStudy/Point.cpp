#include <iostream>
#include "Point.h"

using std::cout;
using std::endl;

bool Point::Init_Members(int xpos, int ypos) {
	if (xpos < 0 || ypos < 0) {
		cout << "벗어난 범위의 값 전달" << endl;
		
		return false;
	}

	x = xpos;
	y = ypos;

	return true;
}

int Point::Get_X() const { // const 함수
	return x;
}

int Point::Get_Y() const { // const 함수
	return y;
}

bool Point::Set_X(int xpos) {
	if (0 > xpos || xpos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;

		return false;
	}

	x = xpos;

	return true;
}

bool Point::Set_Y(int ypos) {
	if (0 > ypos || ypos > 100) {
		cout << "벗어난 범위의 값 전달" << endl;

		return false;
	}

	y = ypos;

	return true;
}