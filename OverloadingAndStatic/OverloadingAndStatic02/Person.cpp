#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

void Person::show() { cout << id << ' ' << weight << ' ' << name << endl; } // Person의 정보 출력하는 함수 정의

Person::Person(int id, string name, double weight) { // 매개변수가 3개인 생성자 정의
	this->id = id;
	this->name = name;
	this->weight = weight;
}