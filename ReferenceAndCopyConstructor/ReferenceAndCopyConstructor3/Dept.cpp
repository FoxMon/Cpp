#include "Dept.h"
#include <iostream>

using std::cout;
using std::cin;

// 클래스 구현부
Dept::Dept(int size) // 매개변수가 한개인 생성자 정의
	: size(size) { // size변수를 매개변수 값으로 초기화
	scores = new int[size]; // size의 크기만큼 정수배열을 동적 할당함
}

/*
 * 복사 생성자가 없어도 프로그램을 완성할 수 있음
Dept::Dept(const Dept& dept)  // 복사생성자 정의
	: size(dept.size) { // 이 객체의 size를 dept의 size로 복사
	this->scores = new int[dept.size]; // 이 객체의 배열 동적 할당
	
	for (int i = 0; i < size; i++) { // 이 객체의 socres배열을 dept의 배열로 복사
		scores[i] = dept.scores[i]; // 배열의 원소들 그대로 복사
	}
}
*/

Dept::~Dept() { // 소멸자 정의
	delete[] scores; // scores배열의 메모리 반환
}

int Dept::getSize() { // size변수의 접근자 정의
	return size; // size 반환
}

void Dept::read() { // size만큼 정수를 읽어 scores 배열에 저장할 함수 정의
	cout << "10개의 점수를 입력하세요. >>";
	
	for (int i = 0; i < size; i++) { // size의 크기만큼 for문 실행
		cin >> scores[i]; // 10개의 정수를 받아 socres배열에 저장
	}
}

bool Dept::isOver60(int index) { // index의 학생 성적이 60보다 크면 true리턴하는 함수 정의
	return (scores[index] > 60); // 60보다 크면 true리턴 아닌경우 false리턴
}