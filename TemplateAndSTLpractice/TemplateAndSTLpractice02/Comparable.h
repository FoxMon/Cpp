#ifndef __COMPARABLE__H_
#define __COMPARABLE__H_
class Comparable { // 추상 클래스 선언부
public:
	virtual bool operator > (Comparable& op2) = 0; // 순수 가상 함수
	virtual bool operator < (Comparable& op2) = 0; // 순수 가상 함수
	virtual bool operator == (Comparable& op2) = 0; // 순수 가상 함수
};
#endif