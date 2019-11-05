#ifndef __MYSTACK__H_
#define __MYSTACK__H_

#include "BaseArray.h"

class MyStack : public BaseArray {
private:
	int top = 0; // ������ �� �����ִ� �ε��� ����

public:
	MyStack(int capacity); // �Ű������� �� ���� ������ ����
	void push(int n); // ���ÿ� ���� �߰��ϴ� �Լ� ����
	int pop(); // ������ �� �����ִ� ���Ҹ� ������ �� ���� ����� �Լ� ����
	int length(); // ���ÿ� ����Ǿ� �ִ� ������ ������ ��ȯ�ϴ� �Լ� ����
	int capacity(); // ������ �뷮�� ��ȯ�ϴ� �Լ� ����
};
#endif