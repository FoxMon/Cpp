#ifndef __CIRCLE__H_
#define __CIRCLE__H_
#include "Comparable.h"
class Circle : public Comparable { // 클래스 선언부 ( Circle class가 추상 클래스 Comparable 을 상속받음 )
private:
	int radius; // 반지름변수 선언

public:
	Circle(int radius = 1); // default 매개변수를 가지고 있는 생성자 선언
	int getRadius(); // 반지름을 리턴하는 함수 선언
	bool operator > (Comparable& op2); // 순수 가상 함수 > 연산 오버라이딩하여 구현해야 함
	bool operator < (Comparable& op2); // 순수 가상 함수 < 연산 오버라이딩하여 구현해야 함
	bool operator == (Comparable& op2); // 순수 가상 함수 == 연산 오버라이딩하여 구현해야 함
};
#endif