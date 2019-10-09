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
	Person(int id = 1, string name = "Grace", double weight = 20.5); // default�Ű������� ���� default������
	void show(); // Person�� ���� ����ϴ� �Լ� ����
};
#endif