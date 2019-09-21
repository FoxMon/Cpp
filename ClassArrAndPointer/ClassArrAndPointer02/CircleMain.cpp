#include <iostream>
#include "Circle.h"

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	int size; // ��ü�迭�� ũ�� �Է¹��� ����
	int count = 0; // ī��Ʈ �� ���� ���� ����

	cout << "���� ���� >> ";
	cin >> size; // ���� ���� �Է¹���

	Circle* cirArr = new Circle[size]; // size�� ������ŭ ��ü�迭 ���� ����
	
	if (!cirArr) { // �޸� ���� �Ҵ翡 �����ߴٸ�
		cout << "�޸� �Ҵ翡 �����߽��ϴ�."; // �� ������ ��� ��

		return 0; // �Լ� ����
	}
	
	for (int i = 0; i < size; i++) { // size��ŭ for�� ����
		int radius; // �������� �Է¹��� radius�������� ����

		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> radius; // radius�� ������ �Է¹ް�
		cirArr[i].setRadius(radius); // �Լ��� �Ѱ���

		if (cirArr[i].getArea() > 100) { // ���� ������ 100���� ũ�ٸ�
			count++; // count�� �� ������Ŵ
		}
	}

	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << endl; // ������ 100���� ū ���� ���� ���

	delete[] cirArr; // �޸� ��ȯ

	return 0;
}