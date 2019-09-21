#ifndef __PLAYER__H_
#define __PLAYER__H_

#include <string>

using std::string;

// Player 클래스 선언부

class Player { 
private:
	string name; // 선수의 이름 저장

public:
	Player(); // default 생성자 선언
	void setName(string name); // 선수의 이름을 저장하는 함수 선언
	string getName(); // 선수의 이름을 반환하는 함수 선언
};

#endif