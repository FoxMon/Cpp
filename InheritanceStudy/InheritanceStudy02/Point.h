#ifndef __POINT__H_
#define __POINT__H_
class Point { // Ŭ���� �����
private:
	int x, y; // x��ǥ�� y��ǥ�� ������ ����

public:
	Point(int x, int y); // �Ű����� 2���� ���� ������ ����
	int getX(); // x��ǥ�� ��ȯ�ϴ� �Լ� ����
	int getY(); // y��ǥ�� ��ȯ�ϴ� �Լ� ����
	
protected:
	void move(int x, int y); // x��ǥ�� y��ǥ ��ġ�� �ٲٴ� �Լ� ����
};
#endif