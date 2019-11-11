#include "WhileLoopAdder.h"

// 클래스 구현부

WhileLoopAdder::WhileLoopAdder(string name) // WhileLoopAdder 생성자 정의
	: LoopAdder(name) { } // 기본클래스의 생성자를 호출하여 name 초기화

int WhileLoopAdder::calculate() { // while문을 진행하면서 x부터 y까지의 합을 반환하는 함수 정의
	int tempX = getX(); // 임시로 x의 값을 저장함
	int tempY = getY(); // 임시로 y의 값을 저장함
	int result = 0;

	while (tempX <= tempY) { // 조건이 참이면 while문을 진행하면서
		result += tempX; // result의 값에 x의 값을 더함
		tempX++; // x의 값을 y까지 증가시킴
	}

	return result; // 그리고 결과값을 반환
}