#include "Point.h"

// Ŭ���� ������

Point::Point(int x, int y) // �Ű������� 2���� ������ ����
	: x(x), y(y) {  } // x, y��ǥ �ʱ�ȭ

int Point::getX() { return x; } // x��ǥ ��ȯ�ϴ� �Լ� ����
int Point::getY() { return y; } // y��ǥ ��ȯ�ϴ� �Լ� ����

void Point::move(int x, int y) { // x, y��ǥ�� �����̴� �Լ� ���� 
	this->x = x;
	this->y = y;
}