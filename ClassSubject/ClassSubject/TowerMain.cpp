#include <iostream>
#include "Tower.h"

using std::cout;
using std::endl;

int main(void) {
	Tower myTower; // height�� ���� 1�� ��ü�� �ʱ�ȭ
	Tower seoulTower(100); // height�� ���� 100�� ��ü�� �ʱ�ȭ

	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;

	return 0;
}