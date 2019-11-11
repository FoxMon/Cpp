#include "LoopAdder.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Ŭ���� ������

LoopAdder::LoopAdder(string name) // LoopAdder�� ������ ����
	: name(name) { } // name �ɹ� ������ �Ű����� name�� ������ �ʱ�ȭ

int LoopAdder::getX() { return x; } // x�� ���� ��ȯ�ϴ� �Լ� ����
int LoopAdder::getY() { return y; } // y�� ���� ��ȯ�ϴ� �Լ� ����

void LoopAdder::read() { // x�� y�� ���� �Է¹޴� �Լ� ����
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ���. >> ";
	cin >> x >> y; // x�� y�� ���� �Է¹���
}

void LoopAdder::write() { // ��� sum�� ����ϴ� �Լ� ����
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�. " << endl;
}

void LoopAdder::run() { // ������ �����ϴ� �Լ� ����
	read(); // x�� y�� ����
	sum = calculate(); // ���ä� ���鼭 ���
	write(); // ��� sum�� ���� ���
}