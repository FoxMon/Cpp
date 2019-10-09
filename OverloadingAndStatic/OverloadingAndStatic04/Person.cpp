#include "Person.h"
#include <iostream>

Person::Person() // default������ ����
	: num(0), name("") { // name�� �ʱⰪ null�� ����
	// Empty
}

Person::Person(string name) // �Ű������� �� ���� ������ ����
	: num(0), name(name) { // Person��������� �Ű����� name�� �־��ش�
	// Empty
}

void Person::setName(string name) { this->name = name; } // ������� name�� �����ϴ� �Լ� ����
string Person::getName() { return this->name; } // ������� nane�� ��ȯ�ϴ� �Լ� ����
void Person::setNum(int num) { this->num = num; } // ������� num�� �����ϴ� �Լ� ����
int Person::getNum() { return this->num; } // ������� num�� ��ȯ�ϴ� �Լ� ����