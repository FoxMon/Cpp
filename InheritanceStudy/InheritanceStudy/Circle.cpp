#include "Circle.h"

// Ŭ���� ������

Circle::Circle(int radius) // ������ ����
	: radius(radius) {  } // ���޹��� �Ű������� ������ �ʱ�ȭ

int Circle::getRadius() { return radius; } // radius�� ��ȯ�ϴ� �Լ� ����
double Circle::getArea() { return 3.14* radius* radius; } // ���� ���� �ʱ�ȭ�ϴ� �Լ� ����
void Circle::setRadius(int radius) { this->radius = radius; } // �������� �����ϴ� �Լ� ����