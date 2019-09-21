#include "WordGame.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	int people; // 참가하는 인원수 저장할 변수

	cout << "끝말 잇기 게임을 시작합니다." << endl;
	cout << "게임에 참가하는 인원은 몇명입니까? >> "; // 참가자 인원수 결정
	cin >> people; // 인원수 저장

	WordGame app(people); // WordGame객체 생성
	
	app.game(); // 게임 시작!!!

	return 0;
}