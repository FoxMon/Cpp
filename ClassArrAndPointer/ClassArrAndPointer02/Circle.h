#ifndef __CIRCLE__H_
#define __CIRCLE__H_

class Circle { // Ŭ���� �����
private:
	int radius; // ���� ������ ���� ������ ����

public:
	Circle(); // �Ű������� �� ���� ������ ����
	void setRadius(int radius);
	double getArea(); // ���� ������ ��ȯ�ϴ� �Լ� ����
};

#endif