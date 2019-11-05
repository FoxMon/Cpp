#include "ColorPoint.h"
#include <iostream>

using std::cout;
using std::endl;

// Ŭ���� ������

ColorPoint::ColorPoint() // default������ ����
	: Point(0, 0) {
	this->color = "BLACK"; // ���� �⺻�� Black���� ����
} // �⺻Ŭ������ �����ڸ� ȣ���Ͽ� 0, 0 ���� �ʱ�ȭ

ColorPoint::ColorPoint(int x, int y) // �Ű������� 2���� ������ ����
	: Point(x, y) {  } // �⺻Ŭ������ �����ڸ� ȣ���Ͽ� �Ѱܹ��� x, y������ �ʱ�ȭ

void ColorPoint::setPoint(int x, int y) { // x��ǥ�� y��ǥ�� �����ϴ� �Լ� ����
	move(x, y); // �⺻Ŭ������ move�Լ��� �̿��Ͽ� x,y��ǥ ����
}

void ColorPoint::setColor(string color) { this->color = color; } // ���� ������ �����ϴ� �Լ� ����

void ColorPoint::show() { // ���� ������ ����ϴ� �Լ� ���� ���� ���� ����Ѵ�.
	cout << color << "������ " << "(" << getX() << "," << getY() << ")�� ��ġ�� ���Դϴ�." << endl;
}