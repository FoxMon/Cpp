#ifndef __CIRCLE__H_
#define __CIRCLE__H_
class Circle { // class선언부
private:
	int radius; // 반지름변수

public:
	Circle(); // default생성자 선언
	Circle(int radius); // 매개변수가 한 개를 가지고 있는 생성자 선언
	int getRadius(); // radius에 접근할 수 있는 함수 선언
};
#endif