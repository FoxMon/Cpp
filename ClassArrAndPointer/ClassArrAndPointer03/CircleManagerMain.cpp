#include "CircleManager.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(void) {
	int size; // ���� ������ �Է¹��� ����

	cout << "���� ���� >> ";
	cin >> size; // ������ size�� ����

	CircleManager circleMgr(size); // CircleManager ��ü ����

	circleMgr.manageCircle(); // �̸��� ������ ����
	circleMgr.searchByName(); // ����ڷκ��� ���� �̸��� �Է¹޾� ���� ����ϴ� �Լ� ȣ��
	circleMgr.searchByArea(); // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸��� ����ϴ� �Լ� ȣ��
	
	return 0;
}