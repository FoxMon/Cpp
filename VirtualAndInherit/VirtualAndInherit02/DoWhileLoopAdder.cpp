#include "DoWhileLoopAdder.h"

// 클래스 구현부

DoWhileLoopAdder::DoWhileLoopAdder(string name) // DoWhileLoopAdder 생성자 정의
	: LoopAdder(name) { } // 기본 클래스의 생성자를 호출하여 name 초기화

int DoWhileLoopAdder::calculate() { // do-while문을 진행하면서 x부터 y까지의 합을 반환하는 함수 정의
	int result = 0; // 결과를 저장하는 변수
	int tempX = getX(); // 임시로 x의 값을 반환받음
	int tempY = getY(); // 임시로 y의 값을 반환받음

	do {
		result += tempX; // x의 값을 더하여 result에 저장
		tempX++; // x의 값을 y까지 증가시킴
	} while (tempX <= tempY); // y의 값까지 반복문 진행
	
	return result; // 결과값 반환
}