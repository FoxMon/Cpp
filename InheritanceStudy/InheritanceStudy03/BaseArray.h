#ifndef __BASEARRAY__H_
#define __BASEARRAY__H_
class BaseArray { // 클래스 선언부
private:
	int capacity; // 배열의 크기를 저장하는 변수
	int* mem; // 정수배열을 만들기 위한 메모리의 포인터

protected:
	BaseArray(int capacity = 100); // default값을 가지고 있는 매개변수가 하나인 생성자 선언
	~BaseArray(); // 소멸자 선언
	void put(int index, int val); // 배열에 값을 넣는 함수 선언
	int get(int index); // 해당 인덱스의 원소값을 반환하는 함수 선언
	int getCapacity(); // 배열의 크기를 반환하는 함수 선언
};
#endif