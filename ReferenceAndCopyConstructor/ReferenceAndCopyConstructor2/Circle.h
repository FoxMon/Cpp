#ifndef __CIRCLE__H_
#define __CIRCLE__H_
class Circle { // 클래스 선언부
private:
	int radius; // 반지름 저장하는 변수
	
public:
	Circle(int radius); // 매개변수가 한개인 생성자 선언
	int getRadius(); // radius변수 접근자 선언
	void setRadius(int radius); // radius변수 설정자 선언
	void show(); // Circle의 정보를 출력하는 함수 선언
};
#endif