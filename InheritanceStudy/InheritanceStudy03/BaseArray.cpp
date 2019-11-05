#include "BaseArray.h"

// 클래스 구현부

BaseArray::BaseArray(int capacity) // 매개변수가 하나인 생성자 정의
	: capacity(capacity) { // 넘겨받은 매개변수로 capacity변수 초기화
	mem = new int[capacity]; // capacity의 크기만큼 동적 메모리 할당
}

BaseArray::~BaseArray() { delete[] mem; } // 소멸자 정의 할당받은 메모리 반환

void BaseArray::put(int index, int val) { mem[index] = val; } // 배열에 값을 넣는 함수 정의
int BaseArray::get(int index) { return mem[index]; } // 해당 인덱스의 값 반환하는 함수 정의
int BaseArray::getCapacity() { return capacity; } // 배열의 크기를 반환하는 함수 정의