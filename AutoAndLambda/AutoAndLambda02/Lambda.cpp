#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(void) {
	auto love = [](string a, string b) {
		cout << a << "���� " << b << "�� ����" << endl;
	};

	love("��", "��");

	double pi = 3.14;
	
	auto calc = [pi](int r)->double {
		return pi * r* r;
	};

	cout << "������ " << calc(3);
}