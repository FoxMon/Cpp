#include "Sample.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Ŭ���� ������

Sample::Sample(int n) { // �Ű������� 1���� ������ ����
	size = n; // �迭�� ���� ����
	p = new int[n]; // n���� ���� �迭�� ���� ����
}

void Sample::read() { // ���� �Ҵ���� �����迭 p�� ����ڷκ��� ������ �Է´� �Լ� ����
	for (int i = 0; i < size; i++) { // �迭�� ũ�⸸ŭ for�� ����
		cin >> p[i]; // ����ڷκ��� �Է¹��� ���� �迭�� ����
	}
}

void Sample::write() { // �����迭�� ȭ�鿡 ����ϴ� �Լ� ����
	for (int i = 0; i < size; i++) { // �迭�� ���� ������ŭ for�� ����
		cout << p[i] << " "; // �迭�� �� ���� ���
	}

	cout << endl; // ����
}

int Sample::big() { // �����迭���� ���� ū �� �����ϴ� �Լ� ����
	int max = p[0]; // �迭�� ù ��° ���� ����

	for (int i = 1; i < size; i++) { // �� ��° �ε������� ����
		if (max <= p[i]) { // max���� �迭�� ���Ұ� �� ũ��
			max = p[i]; // max�� �� ���� ����
		}
	}

	return max; // ���� ū �� ��ȯ
}

Sample::~Sample() { // �Ҹ��� ���� (�Ҹ��ڿ��� �޸� ��ȯ ����)
	delete[] p; // p �� �޸� ��ȯ
}