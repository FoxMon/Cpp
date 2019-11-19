#include "Circle.h"

// Ŭ���� ������

Circle::Circle(int radius) // �Ű������� 1���� ������ ����
	: radius(radius) {  }

int Circle::getRadius() { return this->radius; } // �������� �����ϴ� �Լ� ����

bool Circle::operator < (Comparable& op2) { // ���� �����Լ� < ����
	Circle* op = (Circle*)& op2; // �ٿ� ĳ�������� ����ȯ ���� ( �� ��, ��������� �� ��ȯ �ʿ� Circle�� �����ͷ� )
	
	if (this->getRadius() < op->getRadius()) { // ���� ��ü�� ���������� op�� �������� ũ�ٸ�
		return true; // ��
	}

	return false; // �� ���� ��� ����
}

bool Circle::operator > (Comparable& op2) { // ���� �����Լ� > ����
	Circle* op = (Circle*)& op2; // �ٿ� ĳ����

	if (this->getRadius() > op->getRadius()) { // ���� ��ü�� �������� �� ũ��
		return true; // ��
	}

	return false; // �� ���� ��� ����
}

bool Circle::operator == (Comparable& op2) { // ���� �����Լ� == ����
	Circle* op = (Circle*)& op2;

	if (this->getRadius() == op->getRadius()) { // ���� ��ü�� �������� op�� �������� ������
		return true; // ��
	}

	return false; // �� ���� ��� ����
}
