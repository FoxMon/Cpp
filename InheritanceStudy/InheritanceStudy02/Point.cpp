#include "Point.h"

// 클래스 구현부

Point::Point(int x, int y) // 매개변수가 2개인 생성자 정의
	: x(x), y(y) {  } // x, y좌표 초기화

int Point::getX() { return x; } // x좌표 반환하는 함수 정의
int Point::getY() { return y; } // y좌표 반환하는 함수 정의

void Point::move(int x, int y) { // x, y좌표를 움직이는 함수 정의 
	this->x = x;
	this->y = y;
}