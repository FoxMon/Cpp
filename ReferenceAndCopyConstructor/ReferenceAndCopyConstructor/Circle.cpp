#include "Circle.h"

// 클래스 구현부

Circle::Circle() { // default생성자 정의
	radius = 1; // 반지름 1로 설정
}

Circle::Circle(int radius) // 매개변수가 한개인 생성자 정의 
	: radius(radius) { // 주어진 값으로 반지름 초기화
	// Empty
}

int Circle::getRadius() { // getRadius함수 정의
	return radius; // radius반환
}