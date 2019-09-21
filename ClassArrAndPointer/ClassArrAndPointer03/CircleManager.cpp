#include "CircleManager.h"
#include <iostream>

using std::endl;
using std::cout;
using std::cin;

// Ŭ���� ������

CircleManager::CircleManager(int size) // �Ű������� �ϳ��� ������ ����
	: size(size) { // size�� �� ����
	p = new Circle[size]; // size�� ������ŭ ��ü �迭 ���� �Ҵ�
}

CircleManager::~CircleManager() { // �Ҹ��� ����
	delete[] p; // �޸� ��ȯ
}

void CircleManager::searchByName() { // ����ڷκ��� ���� �̸��� �Է¹޾� ���� ����ϴ� �Լ� ����
	string searchName; // ã���� �ϴ� ���� �̸��� ������ ����

	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> searchName; // searchName�� �̸��� �Է�

	for (int i = 0; i < size; i++) { // size�� ũ�⸸ŭ for�� ����
		if (p[i].getName().compare(searchName) == 0) { // ��ü�迭�� ������ �̸��� �����Ͽ� compare�Լ��� �̿��� �̸� ��
			cout << "������ ������ " << p[i].getArea() << endl; // �� ��ü�� ���� ��� ��

			break; // for�� Ż��
		}
	}
}

void CircleManager::searchByArea() { // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸��� ����ϴ� �Լ� ����
	int minArea; // �ּ� ������ �Է¹��� ����

	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> minArea; // �ּ� ������ �Է�
	cout << minArea << "���� ū ���� �˻��մϴ�." << endl;

	for (int i = 0; i < size; i++) { // size�� ũ�⸸ŭ for�� ����
		if (p[i].getArea() > minArea) { // ��ü�� ������ minArea���� ũ�ٸ�
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ","; // ���� �̸��� ���� ���
		}
	}

	cout << endl;
}

void CircleManager::manageCircle() { // ���� �����ϴ� �Լ� ����
	for (int i = 0; i < size; i++) { // size�� ũ�⸸ŭ for�� ����
		string name; // �̸��� ������ ����
		int radius; // �������� ������ ����

		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius; // �̸��� ������ ���� ��
		p[i].setCircle(name, radius); // ��ü�� �Լ��� ������ �Ѱ���
	}
}