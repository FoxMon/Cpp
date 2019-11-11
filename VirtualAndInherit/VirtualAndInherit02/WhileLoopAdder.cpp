#include "WhileLoopAdder.h"

// Ŭ���� ������

WhileLoopAdder::WhileLoopAdder(string name) // WhileLoopAdder ������ ����
	: LoopAdder(name) { } // �⺻Ŭ������ �����ڸ� ȣ���Ͽ� name �ʱ�ȭ

int WhileLoopAdder::calculate() { // while���� �����ϸ鼭 x���� y������ ���� ��ȯ�ϴ� �Լ� ����
	int tempX = getX(); // �ӽ÷� x�� ���� ������
	int tempY = getY(); // �ӽ÷� y�� ���� ������
	int result = 0;

	while (tempX <= tempY) { // ������ ���̸� while���� �����ϸ鼭
		result += tempX; // result�� ���� x�� ���� ����
		tempX++; // x�� ���� y���� ������Ŵ
	}

	return result; // �׸��� ������� ��ȯ
}