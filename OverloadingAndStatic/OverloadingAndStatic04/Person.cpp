#include "Person.h"
#include <iostream>

Person::Person() // default생성자 정의
	: num(0), name("") { // name의 초기값 null로 설정
	// Empty
}

Person::Person(string name) // 매개변수가 한 개인 생성자 정의
	: num(0), name(name) { // Person멤버변수에 매개변수 name을 넣어준다
	// Empty
}

void Person::setName(string name) { this->name = name; } // 멤버변수 name을 설정하는 함수 정의
string Person::getName() { return this->name; } // 멤버변수 nane을 반환하는 함수 정의
void Person::setNum(int num) { this->num = num; } // 멤버변수 num을 설정하는 함수 정의
int Person::getNum() { return this->num; } // 멤버변수 num을 반환하는 함수 정의