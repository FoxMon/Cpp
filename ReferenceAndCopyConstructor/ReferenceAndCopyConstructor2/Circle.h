#ifndef __CIRCLE__H_
#define __CIRCLE__H_
class Circle { // Ŭ���� �����
private:
	int radius; // ������ �����ϴ� ����
	
public:
	Circle(int radius); // �Ű������� �Ѱ��� ������ ����
	int getRadius(); // radius���� ������ ����
	void setRadius(int radius); // radius���� ������ ����
	void show(); // Circle�� ������ ����ϴ� �Լ� ����
};
#endif