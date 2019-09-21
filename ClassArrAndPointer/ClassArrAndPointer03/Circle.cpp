#include "Circle.h"
#include <iostream>

// 클래스 구현부

void Circle::setCircle(string name, int radius) { // 원의 이름과 반지름 설정하는 함수 정의
	this->name = name; // name에 이름 설정
	this->radius = radius; // radius에 반지름 설정
}

string Circle::getName() { // 원의 이름을 반환하는 함수 정의
	return name; // 원의 이름 반환
}

double Circle::getArea() { // 원의 면적을 반환하는 함수 정의
	return (radius * radius)* 3.14; // 원의 면적 반환
}