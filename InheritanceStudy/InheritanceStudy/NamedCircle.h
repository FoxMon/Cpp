#ifndef __NAMEDCIRCLE__H_
#define __NAMEDCIRCLE__H_
#include "Circle.h"
#include <string>

using std::string;

class NamedCircle : public Circle { // 클래스 선언부
private:
	string name; // Circle의 이름을 저장할 변수
	
public:
	NamedCircle(); // default 생성자 선언
	NamedCircle(int radius, string name); // 매개변수가 2개인 생성자 선언
	void setCircle(int radius, string name); // 원의 반지름과 이름을 설정함 함수 선언
	string getName(); // 원의 이름을 반환하는 함수 선언
};
#endif