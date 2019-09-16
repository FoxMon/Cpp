#ifndef __EXP__H_
#define __EXP__H_
class Exp { // 함수의 선언부
private:
	int baseNum; // 베이스 숫자를 저장할 변수
	int expNum; // 차수를 저장할 변수
public:
	Exp(); // default생성자 선언
	Exp(int baseN); // 매개변수가 1개인 생성자 선언
	Exp(int baseN, int expN); // 매개변수가 2개인 생성자 선언

	int getValue(); // 지수를 정수로 계산하여 리턴하는 함수 선언
	int getBase(); // 베이스의 값 리턴하는 함수 선언
	int getExp(); // 지수의 값 리턴하는 함수 선언
	bool equals(Exp b); // 이 객체와 객체 b의 값이 같은이 판별하여 리턴하는 함수 선언
};
#endif