#include "Circle.h"

// Ŭ���� ������

Circle::Circle() { // default������ ����
	radius = 1; // ������ 1�� ����
}

Circle::Circle(int radius) // �Ű������� �Ѱ��� ������ ���� 
	: radius(radius) { // �־��� ������ ������ �ʱ�ȭ
	// Empty
}

int Circle::getRadius() { // getRadius�Լ� ����
	return radius; // radius��ȯ
}