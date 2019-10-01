#include "Circle.h"
#include <iostream>

void increaseBy(Circle& cir1, Circle& cir2) { // �������� ���ϴ� �Լ� ����
	int tempRadius = cir1.getRadius() + cir2.getRadius(); // tempRadius������ cir1�������� cir2�� ������ ���� ������ �ʱ�ȭ

	cir1.setRadius(tempRadius); //cir1��ü�� ������ tempRadius������ ����
}

int main(void) {
	Circle x(10), y(5); // �������� 10, 5�� �� ��ü 2�� ����
	
	increaseBy(x, y); // x�� �������� 15�� ���� ������� �Ѵ�.
	x.show(); // �� x��ü�� ���� ���

	return 0;
}

// increaseBy�Լ��� �Ű������� �����ڷ� �������� ������ Call-By-Value�� ȣ���� �Ǳ� ������ ����� ������� �ʴ´�.
// ���� ������ ���� ȣ��� �̷�������� �Ű������� ���������� �޾ƾ��Ѵ�.