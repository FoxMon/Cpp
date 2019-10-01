#include<iostream>

using std::cout;
using std::endl;

class Circle {
private:
	int radius;

public:
	Circle() { radius = 1; } // ������
	Circle(int radius) { this->radius = radius; } // ������
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14* radius* radius; }
	Circle getCircle();

};

Circle Circle::getCircle() {
	Circle tmp(30); // �������� 30�� Circle ��ü tmp ���� 
	return tmp; // ��ü tmp�� ����
}

int main(void) {
	Circle c;
	Circle temp;

	cout << c.getArea() << endl;

	c = temp.getCircle(); // tmp ��ü�� c�� ����

	cout << c.getArea() << endl;

	return 0;
}