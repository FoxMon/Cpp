#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

// Ŭ���� ������

Circle::Circle(int radius) // ������ ����
	: radius(radius) { // radius������ �Ű����� �� �־���
	// Empty
}

int Circle::getRadius() { // radius���� ������ ����
	return radius; // radius���� ��ȯ
}

void Circle::setRadius(int radius) { // radius���� ������ ����
	this->radius = radius; // radius������ �Ű������� ������ �ʱ�ȭ
}

void Circle::show() { // ���� ���� ���
	cout << "�������� " << radius << "�� ��" << endl; // ���������� ���
}