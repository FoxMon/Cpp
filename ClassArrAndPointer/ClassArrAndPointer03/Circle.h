#ifndef __CIRCLE__H_
#define __CIRCLE__H_

#include <string>

using std::string;

class Circle { // Ŭ���� �����
private:
	int radius; // ���� �������� ������ ����
	string name; // ���� �̸��� ������ ����

public:
	void setCircle(string name, int radius); // �̸��� �������� �����ϴ� �Լ� ����
	double getArea(); // ���� ������ ���ϴ� �Լ� ����
	string getName(); // ���� �̸��� ������ �� �ִ� �Լ� ����
};

#endif