#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

Person::Person() { id = 1, name = "Grace", weight = 20.5; } // default생성자 정의
Person::Person(int id, string name) { this->id = id, this->name = name, weight = 20.5; } // 매개변수가 2개인 생성자 정의
Person::Person(int id, string name, double weight) { this->id = id, this->name = name, this->weight = weight; } // 매개변수가 3개인 생성자 정의
void Person::show() { cout << id << ' ' << weight << ' ' << name << endl; } // Person의 정보 출력하는 함수 정의