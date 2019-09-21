#include "WordGame.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// 클래스 구현부

WordGame::WordGame(int size)  // 매개변수가 하나인 생성자 정의
	: size(size) {
	p = new Player[size]; // size의 크기만큼 객체배열 동적 할당
}

WordGame::~WordGame() { // 소멸자 정의
	delete[] p;
}

void WordGame::game() { // 게임을 시작하는 함수 선언
	for (int i = 0; i < size; i++) {
		string name; // 이름을 저장할 name지역변수 선언

		cout << "참가자의 이름을 입력하세요.    빈칸 없이 >> ";
		cin >> name; // name변수에 이름 저장

		p[i].setName(name); // 이름을 저장하는 함수에 값 전달	
	}

	cout << "시작하는 단어는 아버지입니다." << endl;

	string startWord = "아버지"; // 시작 단어를 아버지로 설정
	string afterWord; // 이어서 갈 단어를 저장하는 변수
	int orderIndex = 0; // Player 순서를 결정하는 변수

	while (true) { // 탈락자가 나올 때까지 while문 무한 반복
		if (orderIndex == size) { // size와 같아지면 0부터 다시 시작
			orderIndex = 0; // 첫 순서로 돌아감
		}
		
		cout << p[orderIndex].getName() << ">> ";
		cin >> afterWord; // 이어서 갈 단어에 값을 입력
		
		if (afterWord.length() > 6) { // 3글자가 아니라면
			cout << "3글자 이하로 다시 입력해 주세요." << endl; // 이 문장 출력 후

			continue; // while문의 처음으로 다시
		}

		int wordSize = startWord.size(); // 글자 끝의 두바이트를 비교하기 위한 변수(한국어는 2바이트이기 때문에 wordSize는 6이다)

		if (startWord.at(wordSize -2) == afterWord.at(0) && startWord.at(wordSize -1) == afterWord.at(1)) { // 마지막 글자와 첫 글자가 같다면
			startWord = afterWord; // 첫 글자를 마지막 글자로 바꿔줌
		}
		else { // 틀린경우
			cout << p[orderIndex % size].getName() << " 틀렸습니다." << endl; // 이 문장 출력 후
			
			break; // 반복문 종료(게임종료)
		}

		orderIndex++; // 다음순서로 넘어감
	}
}