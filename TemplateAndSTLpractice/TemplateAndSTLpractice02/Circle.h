#ifndef __CIRCLE__H_
#define __CIRCLE__H_
#include "Comparable.h"
class Circle : public Comparable { // Ŭ���� ����� ( Circle class�� �߻� Ŭ���� Comparable �� ��ӹ��� )
private:
	int radius; // ���������� ����

public:
	Circle(int radius = 1); // default �Ű������� ������ �ִ� ������ ����
	int getRadius(); // �������� �����ϴ� �Լ� ����
	bool operator > (Comparable& op2); // ���� ���� �Լ� > ���� �������̵��Ͽ� �����ؾ� ��
	bool operator < (Comparable& op2); // ���� ���� �Լ� < ���� �������̵��Ͽ� �����ؾ� ��
	bool operator == (Comparable& op2); // ���� ���� �Լ� == ���� �������̵��Ͽ� �����ؾ� ��
};
#endif