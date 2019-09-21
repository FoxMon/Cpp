#include <iostream>
#include "Circle.h"

using std::endl;
using std::cout;
using std::cin;

// 클래스 구현부

Circle::Circle()  // default 생성자 정의 (default생성자에서는 반지름만 초기화)
	: radius(1) { // 기본으로 반지름 1 설정
	// Empty
}

void Circle::setRadius(int radius) { // 반지름을 설정하는 함수 정의
	this->radius = radius; // radius변수에 넘겨받은 반지름의 값 저장
}

double Circle::getArea() { // 원의 면적을 반환하는 함수 정의
	return (radius * radius) * 3.14; // 면적의 값을 반환
}