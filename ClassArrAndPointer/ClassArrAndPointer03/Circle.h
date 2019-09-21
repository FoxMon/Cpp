#ifndef __CIRCLE__H_
#define __CIRCLE__H_

#include <string>

using std::string;

class Circle { // 클래스 선언부
private:
	int radius; // 원의 반지름을 저장할 변수
	string name; // 원의 이름을 저장할 변수

public:
	void setCircle(string name, int radius); // 이름과 반지름을 설정하는 함수 선언
	double getArea(); // 원의 면적을 구하는 함수 선언
	string getName(); // 원의 이름에 접근할 수 있는 함수 선언
};

#endif