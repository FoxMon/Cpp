#include "ColorPoint.h"
#include <iostream>

using std::cout;
using std::endl;

// 클래스 구현부

ColorPoint::ColorPoint() // default생성자 정의
	: Point(0, 0) {
	this->color = "BLACK"; // 색의 기본은 Black으로 지정
} // 기본클래스의 생성자를 호출하여 0, 0 으로 초기화

ColorPoint::ColorPoint(int x, int y) // 매개변수가 2개인 생성자 정의
	: Point(x, y) {  } // 기본클래스의 생성자를 호출하여 넘겨받은 x, y값으로 초기화

void ColorPoint::setPoint(int x, int y) { // x좌표와 y좌표를 설정하는 함수 정의
	move(x, y); // 기본클래스의 move함수를 이용하여 x,y좌표 설정
}

void ColorPoint::setColor(string color) { this->color = color; } // 점의 색상을 설정하는 함수 정의

void ColorPoint::show() { // 원의 정보를 출력하는 함수 정의 색과 점을 출력한다.
	cout << color << "색으로 " << "(" << getX() << "," << getY() << ")에 위치한 점입니다." << endl;
}