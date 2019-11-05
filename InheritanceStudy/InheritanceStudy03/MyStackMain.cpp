#include "MyStack.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	MyStack mStack(100); // 크기가 100인 stack객체 생성
	int n; // 값을 입력받을 변수 선언

	cout << "스택에 삽입할 5개의 정수를 입력하세요. >> ";

	for (int i = 0; i < 5; i++) { // 5개의 값을 입력받음
		cin >> n;
		mStack.push(n); // 입력받은 값을 stack에 push
	}

	cout << "스택의 용량: " << mStack.capacity() << ", 스택의 크기: " << mStack.length() << endl; // 스택의 크기와 용량 출력
	cout << "스택의 모든 원소를 팝하여 출력합니다. >> ";
	
	while (mStack.length() != 0) { // 스택의 크기가 0이 아닐때까지
		cout << mStack.pop() << " "; // 스택에서 pop 수행하여 출력
	}

	cout << endl << "스택의 현재 크기 : " << mStack.length() << " 입니다." << endl; // 스택의 현재 크기정보 출력

	return 0;
}