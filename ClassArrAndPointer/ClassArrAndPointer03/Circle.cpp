#include "Circle.h"
#include <iostream>

// Ŭ���� ������

void Circle::setCircle(string name, int radius) { // ���� �̸��� ������ �����ϴ� �Լ� ����
	this->name = name; // name�� �̸� ����
	this->radius = radius; // radius�� ������ ����
}

string Circle::getName() { // ���� �̸��� ��ȯ�ϴ� �Լ� ����
	return name; // ���� �̸� ��ȯ
}

double Circle::getArea() { // ���� ������ ��ȯ�ϴ� �Լ� ����
	return (radius * radius)* 3.14; // ���� ���� ��ȯ
}