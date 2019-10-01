#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

void swap(Circle& cir1, Circle& cir2) { // ��ü�� �ٲٴ� �Լ� ����
	Circle temp = cir1; // �ӽð�ü temp�� cir1���� �ʱ�ȭ�ϰ�
	cir1 = cir2; // cir1�� cir2����
	cir2 = temp; // cir2���� cir1���� �ٲ�
}

int main(void) {
	Circle cir1(10), cir2(20); // 2���� Circle��ü ����
	
	cout << "��ü�� �ٲ�� �� ������" << endl;
	cout << "Cir1��ü�� ������ : " << cir1.getRadius() << " Cir2��ü�� ������ : " << cir2.getRadius() << endl;

	swap(cir1, cir2); // �� ��ü�� ���� �ٲ���
	
	cout << "��ü�� �ٲ� �� ������" << endl;
	cout << "Cir1��ü�� ������ : " << cir1.getRadius() << " Cir2��ü�� ������ : " << cir2.getRadius() << endl;

	return 0;
}