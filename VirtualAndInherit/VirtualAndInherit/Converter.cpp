#include "Converter.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Ŭ���� ������

Converter::Converter(double ratio) { this->ratio = ratio; } // Converter ������ ���� ( ���� ������ ���� )

void Converter::run() { // ��ȯ�⸦ �����Ű�� �Լ� ����
	double src; // ��ȯ�� ������ ������ �Լ� ( �������� )

	cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
	cout << getSourceString() << "�� �Է��ϼ���>> ";
	cin >> src; // ��ȯ�� ���� �Է¹ް�
	cout << "��ȯ ��� : " << convert(src) << getDestString() << endl; // ��ȯ ����� �Լ��� �����Ͽ� ���
}