#include "Player.h"

// 클래스 구현부


Player::Player() // default생성자 정의
	: name("") { // 기본으로 없는값 설정
	// Empty
}

void Player::setName(string name) { // 선수의 이름을 설정하는 함수 정의
	this->name = name; // name변수에 이름 저장
}

string Player::getName() { // 선수의 이름 반환하는 함수 정의
	return name; // 이름 반환
}