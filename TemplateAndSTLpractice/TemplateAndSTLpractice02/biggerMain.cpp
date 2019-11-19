#include <iostream>
#include "Circle.h"

using std::cout;
using std::endl;

template<class T>
T bigger(T a, T b) { // �� ���� �Ű� ������ ���Ͽ� ū ���� ����
	if (a > b) { // a�� ũ��
		return a; // a ����
	}

	return b; // �� ���� ���� b ����
}

int main(void) {
	int a = 20, b = 50;
	int c;

	c = bigger(a, b); // ū ���� ����

	cout << "20�� 50 �� ū ���� >> " << c << endl;

	Circle waffle(10), pizza(20), y; // waffle��ü pizza��ü, y ��ü ����
	
	y = bigger(waffle, pizza); // ū ���� ���� ( ���׸� Ÿ�Կ� ��ü�� �־� ��üȭ �ϸ� ������ �����ǰ� �ʿ��ϰ� �ǹǷ� ������ �����Ǹ� CircleŬ������ �����ؾ� �� )

	cout << "waffle�� pizza �� ū ���� �������� >> " << y.getRadius() << endl;

	return 0;
}