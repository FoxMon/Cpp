#include <iostream>
#include "Tower.h"

using std::cout;
using std::endl;

int main(void) {
	Tower myTower; // height의 값이 1인 객체로 초기화
	Tower seoulTower(100); // height의 값이 100인 객체로 초기화

	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

	return 0;
}