#ifndef __CIRCLE__H_
#define __CIRCLE__H_
class Circle { // Ŭ���� �����
private:
	int radius; // ������ ����

public:
	Circle(int radius = 0); // default���� ������ ������ ����
	int getRadius(); // radius�� ��ȯ�ϴ� �Լ� ����
	void setRadius(int radius); // radius���� �ʱ�ȭ�ϴ� �Լ� ����
	double getArea(); // ���� ������ ��ȯ�ϴ� �Լ� ����
};
#endif