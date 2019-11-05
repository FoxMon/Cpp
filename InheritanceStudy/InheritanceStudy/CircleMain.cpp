#include "NamedCircle.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	NamedCircle pizza[5]; // pizza��ü ���̰� 5�� �迭 ����
	string name; // �̸��� �Է¹��� ����
	int radius; // �������� �Է¹��� ����
	double max; // ���� �ִ���̸� ���� ����

	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���." << endl;

	for (int i = 0; i < 5; i++) { // �������� �̸��� 5�� �Է¹���
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		
		pizza[i].setCircle(radius, name); // pizza��ü�� ������ �Է¹��� ������ �ʱ�ȭ
	}

	max = pizza[0].getArea(); // ù��° ���� ���̸� �������� ����

	for (int i = 1; i < 5; i++) { // ���� ū ���� ������ ����
		if (max < pizza[i].getArea()) {
			max = pizza[i].getArea();
		}
	}

	for (int i = 0; i < 5; i++) { // ������ �ִ밪�� ���� ���� �̸��� ã��
		if (max == pizza[i].getArea()) { // ã�Ҵٸ�
			cout << "���� ������ ū ���ڴ� " << pizza[i].getName() << "�Դϴ�." << endl; // �̸� ��� ��

			break; // �ݺ��� Ż��
		}
	}

	return 0;
}