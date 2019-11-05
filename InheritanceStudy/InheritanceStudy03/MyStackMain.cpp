#include "MyStack.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	MyStack mStack(100); // ũ�Ⱑ 100�� stack��ü ����
	int n; // ���� �Է¹��� ���� ����

	cout << "���ÿ� ������ 5���� ������ �Է��ϼ���. >> ";

	for (int i = 0; i < 5; i++) { // 5���� ���� �Է¹���
		cin >> n;
		mStack.push(n); // �Է¹��� ���� stack�� push
	}

	cout << "������ �뷮: " << mStack.capacity() << ", ������ ũ��: " << mStack.length() << endl; // ������ ũ��� �뷮 ���
	cout << "������ ��� ���Ҹ� ���Ͽ� ����մϴ�. >> ";
	
	while (mStack.length() != 0) { // ������ ũ�Ⱑ 0�� �ƴҶ�����
		cout << mStack.pop() << " "; // ���ÿ��� pop �����Ͽ� ���
	}

	cout << endl << "������ ���� ũ�� : " << mStack.length() << " �Դϴ�." << endl; // ������ ���� ũ������ ���

	return 0;
}