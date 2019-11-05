#include "MyStack.h"

// 클래스 구현부

MyStack::MyStack(int capacity) // 매개변수가 한개인 생성자 정의 
	: BaseArray(capacity) {  } // 기본클래스의 생성자 호출

void MyStack::push(int n) { // 맨 위의 인덱스에 push하는 함수 정의
	put(top, n); // 기본클래스의 put함수 호출하여 값을 넣음
	top++; // 인덱스 증가
}

int MyStack::pop() { // 맨 위에있는 값을 꺼내는 pop함수 정의
	top--;  // 스택의 맨 위에 저장된 원소의 인덱스에 접근하기 위해 top의 값 감소시킴
	
	int item = get(top); // 값을 임시로 저장하고
	put(top, 0); // 해당 인덱스의 정보를 지움

	return item; // 그리고 값을 반환
}

int MyStack::length() { return top;  } // 스택의 현재 크기를 반환하는 함수 정의
int MyStack::capacity() { return getCapacity(); } // 스택의 용량을 반환하는 함수 정의 기본클래스의 getCapacity()함수 호출