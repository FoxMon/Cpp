#include <iostream>
#include "Circle.h"

using std::endl;
using std::cout;
using std::cin;

// Ŭ���� ������

Circle::Circle()  // default ������ ���� (default�����ڿ����� �������� �ʱ�ȭ)
	: radius(1) { // �⺻���� ������ 1 ����
	// Empty
}

void Circle::setRadius(int radius) { // �������� �����ϴ� �Լ� ����
	this->radius = radius; // radius������ �Ѱܹ��� �������� �� ����
}

double Circle::getArea() { // ���� ������ ��ȯ�ϴ� �Լ� ����
	return (radius * radius) * 3.14; // ������ ���� ��ȯ
}