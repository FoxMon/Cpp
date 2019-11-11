#include "DoWhileLoopAdder.h"

// Ŭ���� ������

DoWhileLoopAdder::DoWhileLoopAdder(string name) // DoWhileLoopAdder ������ ����
	: LoopAdder(name) { } // �⺻ Ŭ������ �����ڸ� ȣ���Ͽ� name �ʱ�ȭ

int DoWhileLoopAdder::calculate() { // do-while���� �����ϸ鼭 x���� y������ ���� ��ȯ�ϴ� �Լ� ����
	int result = 0; // ����� �����ϴ� ����
	int tempX = getX(); // �ӽ÷� x�� ���� ��ȯ����
	int tempY = getY(); // �ӽ÷� y�� ���� ��ȯ����

	do {
		result += tempX; // x�� ���� ���Ͽ� result�� ����
		tempX++; // x�� ���� y���� ������Ŵ
	} while (tempX <= tempY); // y�� ������ �ݺ��� ����
	
	return result; // ����� ��ȯ
}