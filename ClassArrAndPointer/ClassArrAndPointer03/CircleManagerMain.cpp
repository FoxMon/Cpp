#include "CircleManager.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(void) {
	int size; // 원의 개수를 입력받을 변수

	cout << "원의 개수 >> ";
	cin >> size; // 개수를 size에 저장

	CircleManager circleMgr(size); // CircleManager 객체 생성

	circleMgr.manageCircle(); // 이름과 반지름 설정
	circleMgr.searchByName(); // 사용자로부터 원의 이름을 입력받아 면적 출력하는 함수 호출
	circleMgr.searchByArea(); // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름을 출력하는 함수 호출
	
	return 0;
}