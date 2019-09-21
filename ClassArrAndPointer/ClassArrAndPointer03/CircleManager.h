#ifndef __CIRCLEMANAGER__H_
#define __CIRCLEMANAGER__H_

#include "Circle.h"

class CircleManager { // Ŭ���� �����
private:
	Circle* p; // Circle �迭�� ���� ��ü ������ ����
	int size; // �迭�� ũ�⸦ ������ ����

public:
	CircleManager(int size); // �Ű������� �ϳ��� ������ ���� (sizeũ���� �迭 ���� ����, ����ڷκ��� �Է� �Ϸ�)
	~CircleManager(); // �Ҹ��� ����
	void searchByName(); // ����ڷκ��� �̸��� �Է¹޾� ���� ����ϴ� �Լ� ����
	void searchByArea(); // ����ڷκ��� ������ �Է¹޾� �������� ū ���� �̸� ����ϴ� �Լ� ����
	void manageCircle(); // ���� �����ϴ� �Լ� ����
};

#endif