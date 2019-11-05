#ifndef __NAMEDCIRCLE__H_
#define __NAMEDCIRCLE__H_
#include "Circle.h"
#include <string>

using std::string;

class NamedCircle : public Circle { // Ŭ���� �����
private:
	string name; // Circle�� �̸��� ������ ����
	
public:
	NamedCircle(); // default ������ ����
	NamedCircle(int radius, string name); // �Ű������� 2���� ������ ����
	void setCircle(int radius, string name); // ���� �������� �̸��� ������ �Լ� ����
	string getName(); // ���� �̸��� ��ȯ�ϴ� �Լ� ����
};
#endif