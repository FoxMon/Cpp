#ifndef __LOOPADDER__H_
#define __LOOPADDER__H_
#include <string>

using std::string;

class LoopAdder { // 클래스 선언부
private:
	string name; // 루프의 이름
	int x, y, sum; // 시작지점(x) 끝 지점(y) 의 모든 수의 합을 저장하는 sum 변수
	
	void read(); // x, y의 값을 읽어 들이는 함수 선언
	void write(); // sum을 출력하는 함수 선언

protected:
	LoopAdder(string name = ""); // LoopAdder의 생성자 선언 default매개변수를 가지고 있음
	int getX(); // x의 값을 반환하는 함수 선언
	int getY(); // y의 값을 반환하는 함수 선언
	virtual int calculate() = 0; // 순수 가상 함수 선언. 루프를 돌며 합을 구하는 함수

public:
	void run(); // 연산을 진행하는 함수 선언
};
#endif