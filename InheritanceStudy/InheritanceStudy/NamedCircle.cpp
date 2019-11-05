#include "NamedCircle.h"
#include <iostream>

using std::cout;
using std::endl;

// 클래스 구현부

NamedCircle::NamedCircle() // 기본생성자 정의
	: name(" ") {  } // name을 공백으로 초기화

NamedCircle::NamedCircle(int radius, string name) // 매개변수가 2개인 생성자 정의
	: Circle(radius) { this->name = name; } // 기본클래스의 생성자 호출하여 radius 초기화 후 name변수 초기화

void NamedCircle::setCircle(int radius, string name) { // 원의 이름과 반지름을 설정하는 함수 정의
	setRadius(radius); // 상속받은 함수 호출하여 반지름 초기화
	this->name = name; // 넘겨받은 매개변수로 name 초기화
}

string NamedCircle::getName() { return this->name; } // 원의 이름을 반환하는 함수 정의