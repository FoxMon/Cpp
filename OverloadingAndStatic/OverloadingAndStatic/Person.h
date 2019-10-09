#ifndef __PERSON__H_
#define __PERSON__H_
#include <string>

using std::string;

class Person {
private:
	int id; // ID�� ������ ����
	double weight; // ���Ը� ������ ����
	string name; // Person�� �̸� ������ ����

public:
	Person(); // default������  ����
	Person(int id, string name);  // �Ű������� 2���� ������ ����
	Person(int id, string name, double weight); // �Ű������� 3���� ������ ����
	void show(); // Person�� ���� ����ϴ� �Լ� ����
};
#endif