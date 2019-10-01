#include<iostream>

using std::cout;
using std::endl;

class Circle {
private:
	int radius;

public:
	Circle() { radius = 1; } // 생성자
	Circle(int radius) { this->radius = radius; } // 생성자
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14* radius* radius; }
	Circle getCircle();

};

Circle Circle::getCircle() {
	Circle tmp(30); // 반지름이 30인 Circle 객체 tmp 생성 
	return tmp; // 객체 tmp를 리턴
}

int main(void) {
	Circle c;
	Circle temp;

	cout << c.getArea() << endl;

	c = temp.getCircle(); // tmp 객체가 c로 복사

	cout << c.getArea() << endl;

	return 0;
}