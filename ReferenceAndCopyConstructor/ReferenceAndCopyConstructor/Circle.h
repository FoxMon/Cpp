#ifndef __CIRCLE__H_
#define __CIRCLE__H_
class Circle { // class�����
private:
	int radius; // ����������

public:
	Circle(); // default������ ����
	Circle(int radius); // �Ű������� �� ���� ������ �ִ� ������ ����
	int getRadius(); // radius�� ������ �� �ִ� �Լ� ����
};
#endif