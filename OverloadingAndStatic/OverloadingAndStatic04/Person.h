#ifndef __PERSON__H_
#define __PEROSN__H_
#include <string>

using std::string;

class Person {
private:
	string name; // �̸��� ������ ���� ����
	int num; // ���ڸ� ������ ���� ����

public:
	Person(); // default ������ ����
	Person(string name); // �Ű������� �Ѱ��λ����� ����
	void setName(string name); // name�� ������ �Լ� ����
	string getName(); // name�� ��ȯ�� �Լ� ����
	void setNum(int num); // num�� ������ �Լ� ����
	int getNum(); // num�� ��ȯ�� �Լ� ����
};
#endif