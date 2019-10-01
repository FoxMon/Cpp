#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

// 클래스 구현부

Circle::Circle(int radius) // 생성자 정의
	: radius(radius) { // radius변수에 매개변수 값 넣어줌
	// Empty
}

int Circle::getRadius() { // radius변수 접근자 정의
	return radius; // radius변수 반환
}

void Circle::setRadius(int radius) { // radius변수 설정자 정의
	this->radius = radius; // radius변수에 매개변수의 값으로 초기화
}

void Circle::show() { // 원의 정보 출력
	cout << "반지름이 " << radius << "인 원" << endl; // 반지름정보 출력
}