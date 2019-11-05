#ifndef __MYSTACK__H_
#define __MYSTACK__H_

#include "BaseArray.h"

class MyStack : public BaseArray {
private:
	int top = 0; // 스택의 맨 위에있는 인덱스 변수

public:
	MyStack(int capacity); // 매개변수가 한 개인 생성자 선언
	void push(int n); // 스택에 값을 추가하는 함수 선언
	int pop(); // 스택의 맨 위에있는 원소를 꺼내고 그 값을 지우는 함수 선언
	int length(); // 스택에 저장되어 있는 원소의 개수를 반환하는 함수 선언
	int capacity(); // 스택의 용량을 반환하는 함수 선언
};
#endif