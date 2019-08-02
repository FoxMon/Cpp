#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using std::cout;
using std::endl;

int main(void) {
	Point pos1;

	if (!pos1.Init_Members(-2, 4)) {
		cout << "초기화 실패" << endl;
	}

	if (!pos1.Init_Members(2, 4)) {
		cout << "초기화 실패" << endl;
	}

	Point pos2;

	if (!pos2.Init_Members(5, 9)) {
		cout << "초기화 실패" << endl;
	}

	Rectangle rec;

	if (!rec.Init_Members(pos2, pos1)) {
		cout << "직사각형 초기화 실패" << endl;
	}

	if (!rec.Init_Members(pos1, pos2)) {
		cout << "직사각형 초기화 실패" << endl;
	}

	rec.Show_Rec_Info();

	return 0;
}