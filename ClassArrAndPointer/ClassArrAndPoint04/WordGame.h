#ifndef __WORDGAME__H_
#define __WORDGAME__H_

#include "Player.h"

// WordGame 클래스 선언부

class WordGame {
private:
	Player* p; // Player 객체 포인터 선언
	int size; // 배열의 크기를 저장할 변수

public:
	WordGame(int size); // 매개변수가 하나인 생성자 선언
	~WordGame(); // 소멸자 선언
	void game(); // 게임을 시작하는 함수 선언
};

#endif