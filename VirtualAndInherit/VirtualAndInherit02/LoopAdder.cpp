#include "LoopAdder.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// 클래스 구현부

LoopAdder::LoopAdder(string name) // LoopAdder의 생성자 정의
	: name(name) { } // name 맴버 변수에 매개인자 name의 값으로 초기화

int LoopAdder::getX() { return x; } // x의 값을 반환하는 함수 정의
int LoopAdder::getY() { return y; } // y의 값을 반환하는 함수 정의

void LoopAdder::read() { // x와 y의 값을 입력받는 함수 정의
	cout << name << ":" << endl;
	cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요. >> ";
	cin >> x >> y; // x와 y의 값을 입력받음
}

void LoopAdder::write() { // 결과 sum을 출력하는 함수 정의
	cout << x << "에서 " << y << "까지의 합 = " << sum << " 입니다. " << endl;
}

void LoopAdder::run() { // 연산을 진행하는 함수 정의
	read(); // x와 y를 읽음
	sum = calculate(); // 루플ㄹ 돌면서 계산
	write(); // 결과 sum의 값을 출력
}