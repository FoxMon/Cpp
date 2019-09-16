#include "Tower.h"

// 클래스의 구현부

Tower::Tower() // default 생성자 정의
	: height(1) { // height변수를 1로 초기화
	// Empty
}

Tower::Tower(int h) { // 매개변수가 있는 생성자 정의
	height = h; // height 변수에 h를 넣어서 초기화
}

int Tower::getHeight() { // height변수에 접근할 수 있는 함수정의
	return height; // height변수 반환
}