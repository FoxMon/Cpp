#ifndef __CIRCLEMANAGER__H_
#define __CIRCLEMANAGER__H_

#include "Circle.h"

class CircleManager { // 클래스 선언부
private:
	Circle* p; // Circle 배열에 대한 객체 포인터 변수
	int size; // 배열의 크기를 저장할 변수

public:
	CircleManager(int size); // 매개변수가 하나인 생성자 선언 (size크기의 배열 동적 생성, 사용자로부터 입력 완료)
	~CircleManager(); // 소멸자 선언
	void searchByName(); // 사용자로부터 이름을 입력받아 면적 출력하는 함수 선언
	void searchByArea(); // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력하는 함수 선언
	void manageCircle(); // 원을 셋팅하는 함수 선언
};

#endif