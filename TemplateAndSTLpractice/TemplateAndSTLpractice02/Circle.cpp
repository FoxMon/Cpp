#include "Circle.h"

// 클래스 구현부

Circle::Circle(int radius) // 매개변수가 1개인 생성자 정의
	: radius(radius) {  }

int Circle::getRadius() { return this->radius; } // 반지름을 리턴하는 함수 정의

bool Circle::operator < (Comparable& op2) { // 순수 가상함수 < 구현
	Circle* op = (Circle*)& op2; // 다운 캐스팅으로 형변환 해줌 ( 이 때, 명시적으로 형 변환 필요 Circle형 포인터로 )
	
	if (this->getRadius() < op->getRadius()) { // 현재 객체의 반지름보다 op의 반지름이 크다면
		return true; // 참
	}

	return false; // 그 외의 경우 거짓
}

bool Circle::operator > (Comparable& op2) { // 순수 가상함수 > 구현
	Circle* op = (Circle*)& op2; // 다운 캐스팅

	if (this->getRadius() > op->getRadius()) { // 현재 객체의 반지름이 더 크면
		return true; // 참
	}

	return false; // 그 외의 경우 거짓
}

bool Circle::operator == (Comparable& op2) { // 순수 가상함수 == 구현
	Circle* op = (Circle*)& op2;

	if (this->getRadius() == op->getRadius()) { // 현재 객체의 반지름과 op의 반지름이 같으면
		return true; // 참
	}

	return false; // 그 외의 경우 거짓
}
