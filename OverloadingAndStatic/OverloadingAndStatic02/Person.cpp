#include <iostream>
#include "Person.h"

using std::cout;
using std::endl;

void Person::show() { cout << id << ' ' << weight << ' ' << name << endl; } // Person�� ���� ����ϴ� �Լ� ����

Person::Person(int id, string name, double weight) { // �Ű������� 3���� ������ ����
	this->id = id;
	this->name = name;
	this->weight = weight;
}