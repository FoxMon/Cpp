#include "UpAndDown.h"
#include "Person.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int UpAndDownGame::minNum = 0; // 최소숫자 0으로 설정
int UpAndDownGame::maxNum = 100; // 최대숫자 100으로 설정

void UpAndDownGame::startGame() {
	Person player[2]; // 플레이어 객체 2개 생성
	
	cout << "Up & Down 게임을 시작합니다. 플레이어는 2명입니다." << endl;
	cout << "플레이어의 이름을 설정해주세요..." << endl;

	for (int i = 0; i < 2; i++) {
		string name; // 이름을 설정할 변수

		cout << i + 1 << "번 째 플레이어 이름을 입력해주세요 >> ";
		getline(cin, name, '\n'); // 이름을 입력받음
		player[i].setName(name); // 플레이어 이름 설정
	}

	UpAndDownGame::seed(); // 씨드설정

	cout << "게임을 시작합니다...!!" << endl << endl;
	cout << "답은 " << minNum << "과 " << maxNum << "사이에 있습니다." << endl; // 숫자 범위를 알려줌

	int correct = (rand() % 100) + 1; // 1~100사이의 랜덤 정수 설정

	while (1) {
		for (int i = 0; i < 2; i++) {
			int tempNum; // Player숫자를 저장할 변수

			cout << player[i].getName() << ">> ";
			cin >> tempNum; // player의 숫자를 입력받고
			player[i].setNum(tempNum); // 숫자 설정

			if (player[i].getNum() == correct) { // 정답이라면
				cout << player[i].getName() << "(이)가 이겼습니다.!!!" << endl;

				return; // 함수 종료
			}

			player[i].getNum() > correct ? maxNum = player[i].getNum() : minNum = player[i].getNum(); // 정답보다 높다면 max에 플레이어의 값을 아니면 그 반대로
			cout << "답은 " << minNum << "과 " << maxNum << "사이에 있습니다." << endl; // 숫자 범위를 알려줌
		}
	}
}	