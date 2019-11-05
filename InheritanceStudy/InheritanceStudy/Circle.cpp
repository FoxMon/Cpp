#include "Circle.h"

// 클래스 구현부

Circle::Circle(int radius) // 생성자 정의
	: radius(radius) {  } // 전달받은 매개변수로 반지름 초기화

int Circle::getRadius() { return radius; } // radius를 반환하는 함수 정의
double Circle::getArea() { return 3.14* radius* radius; } // 원의 넓이 초기화하는 함수 정의
void Circle::setRadius(int radius) { this->radius = radius; } // 반지름을 설정하는 함수 정의