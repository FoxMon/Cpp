#include "Dept.h"
#include <iostream>

using std::cout;
using std::cin;

// Ŭ���� ������
Dept::Dept(int size) // �Ű������� �Ѱ��� ������ ����
	: size(size) { // size������ �Ű����� ������ �ʱ�ȭ
	scores = new int[size]; // size�� ũ�⸸ŭ �����迭�� ���� �Ҵ���
}

/*
 * ���� �����ڰ� ��� ���α׷��� �ϼ��� �� ����
Dept::Dept(const Dept& dept)  // ��������� ����
	: size(dept.size) { // �� ��ü�� size�� dept�� size�� ����
	this->scores = new int[dept.size]; // �� ��ü�� �迭 ���� �Ҵ�
	
	for (int i = 0; i < size; i++) { // �� ��ü�� socres�迭�� dept�� �迭�� ����
		scores[i] = dept.scores[i]; // �迭�� ���ҵ� �״�� ����
	}
}
*/

Dept::~Dept() { // �Ҹ��� ����
	delete[] scores; // scores�迭�� �޸� ��ȯ
}

int Dept::getSize() { // size������ ������ ����
	return size; // size ��ȯ
}

void Dept::read() { // size��ŭ ������ �о� scores �迭�� ������ �Լ� ����
	cout << "10���� ������ �Է��ϼ���. >>";
	
	for (int i = 0; i < size; i++) { // size�� ũ�⸸ŭ for�� ����
		cin >> scores[i]; // 10���� ������ �޾� socres�迭�� ����
	}
}

bool Dept::isOver60(int index) { // index�� �л� ������ 60���� ũ�� true�����ϴ� �Լ� ����
	return (scores[index] > 60); // 60���� ũ�� true���� �ƴѰ�� false����
}