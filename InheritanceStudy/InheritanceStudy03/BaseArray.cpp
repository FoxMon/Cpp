#include "BaseArray.h"

// Ŭ���� ������

BaseArray::BaseArray(int capacity) // �Ű������� �ϳ��� ������ ����
	: capacity(capacity) { // �Ѱܹ��� �Ű������� capacity���� �ʱ�ȭ
	mem = new int[capacity]; // capacity�� ũ�⸸ŭ ���� �޸� �Ҵ�
}

BaseArray::~BaseArray() { delete[] mem; } // �Ҹ��� ���� �Ҵ���� �޸� ��ȯ

void BaseArray::put(int index, int val) { mem[index] = val; } // �迭�� ���� �ִ� �Լ� ����
int BaseArray::get(int index) { return mem[index]; } // �ش� �ε����� �� ��ȯ�ϴ� �Լ� ����
int BaseArray::getCapacity() { return capacity; } // �迭�� ũ�⸦ ��ȯ�ϴ� �Լ� ����