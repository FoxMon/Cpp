#include "MyStack.h"

// Ŭ���� ������

MyStack::MyStack(int capacity) // �Ű������� �Ѱ��� ������ ���� 
	: BaseArray(capacity) {  } // �⺻Ŭ������ ������ ȣ��

void MyStack::push(int n) { // �� ���� �ε����� push�ϴ� �Լ� ����
	put(top, n); // �⺻Ŭ������ put�Լ� ȣ���Ͽ� ���� ����
	top++; // �ε��� ����
}

int MyStack::pop() { // �� �����ִ� ���� ������ pop�Լ� ����
	top--;  // ������ �� ���� ����� ������ �ε����� �����ϱ� ���� top�� �� ���ҽ�Ŵ
	
	int item = get(top); // ���� �ӽ÷� �����ϰ�
	put(top, 0); // �ش� �ε����� ������ ����

	return item; // �׸��� ���� ��ȯ
}

int MyStack::length() { return top;  } // ������ ���� ũ�⸦ ��ȯ�ϴ� �Լ� ����
int MyStack::capacity() { return getCapacity(); } // ������ �뷮�� ��ȯ�ϴ� �Լ� ���� �⺻Ŭ������ getCapacity()�Լ� ȣ��