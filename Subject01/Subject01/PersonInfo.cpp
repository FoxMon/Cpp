#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	char name[10]; // �̸�����
	char address[50]; // �ּ�����
	int age; // ��������

	cout << "�̸���?";
	cin.getline(name, 10, '\n');

	cout << "�ּҴ�?";
	cin.getline(address, 50, '\n');

	cout << "���̴�?";
	cin >> age;

	cout << name << ", " << address << ", " << age << "��" << endl;

	return 0;
}