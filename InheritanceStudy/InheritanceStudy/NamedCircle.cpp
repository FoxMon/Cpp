#include "NamedCircle.h"
#include <iostream>

using std::cout;
using std::endl;

// Ŭ���� ������

NamedCircle::NamedCircle() // �⺻������ ����
	: name(" ") {  } // name�� �������� �ʱ�ȭ

NamedCircle::NamedCircle(int radius, string name) // �Ű������� 2���� ������ ����
	: Circle(radius) { this->name = name; } // �⺻Ŭ������ ������ ȣ���Ͽ� radius �ʱ�ȭ �� name���� �ʱ�ȭ

void NamedCircle::setCircle(int radius, string name) { // ���� �̸��� �������� �����ϴ� �Լ� ����
	setRadius(radius); // ��ӹ��� �Լ� ȣ���Ͽ� ������ �ʱ�ȭ
	this->name = name; // �Ѱܹ��� �Ű������� name �ʱ�ȭ
}

string NamedCircle::getName() { return this->name; } // ���� �̸��� ��ȯ�ϴ� �Լ� ����