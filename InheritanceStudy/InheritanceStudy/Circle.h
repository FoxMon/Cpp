#ifndef __CIRCLE__H_
#define __CIRCLE__H_
class Circle { // 클래스 선언부
private:
	int radius; // 반지름 변수

public:
	Circle(int radius = 0); // default값을 가지는 생성자 선언
	int getRadius(); // radius를 반환하는 함수 선언
	void setRadius(int radius); // radius값을 초기화하는 함수 선언
	double getArea(); // 원의 면적을 반환하는 함수 선언
};
#endif