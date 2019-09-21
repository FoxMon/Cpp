#ifndef __CIRCLE__H_
#define __CIRCLE__H_

class Circle { // 클래스 선언부
private:
	int radius; // 원의 반지름 값을 저장할 변수

public:
	Circle(); // 매개변수가 한 개인 생성자 선언
	void setRadius(int radius);
	double getArea(); // 원의 면적을 반환하는 함수 선언
};

#endif