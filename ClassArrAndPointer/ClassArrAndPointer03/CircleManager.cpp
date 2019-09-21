#include "CircleManager.h"
#include <iostream>

using std::endl;
using std::cout;
using std::cin;

// 클래스 구현부

CircleManager::CircleManager(int size) // 매개변수가 하나인 생성자 정의
	: size(size) { // size의 값 대입
	p = new Circle[size]; // size의 개수만큼 객체 배열 동적 할당
}

CircleManager::~CircleManager() { // 소멸자 정의
	delete[] p; // 메모리 반환
}

void CircleManager::searchByName() { // 사용자로부터 원의 이름을 입력받아 면적 출력하는 함수 정의
	string searchName; // 찾고자 하는 원의 이름을 저장할 변수

	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> searchName; // searchName에 이름을 입력

	for (int i = 0; i < size; i++) { // size의 크기만큼 for문 수행
		if (p[i].getName().compare(searchName) == 0) { // 객체배열의 원소의 이름에 접근하여 compare함수를 이용해 이름 비교
			cout << "도넛의 면적은 " << p[i].getArea() << endl; // 그 객체의 면적 출력 후

			break; // for문 탈출
		}
	}
}

void CircleManager::searchByArea() { // 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름을 출력하는 함수 정의
	int minArea; // 최소 면적을 입력받을 변수

	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> minArea; // 최소 면적을 입력
	cout << minArea << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++) { // size의 크기만큼 for문 수행
		if (p[i].getArea() > minArea) { // 객체의 면적이 minArea보다 크다면
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ","; // 원의 이름과 면적 출력
		}
	}

	cout << endl;
}

void CircleManager::manageCircle() { // 원을 셋팅하는 함수 정의
	for (int i = 0; i < size; i++) { // size의 크기만큼 for문 수행
		string name; // 이름을 저장할 변수
		int radius; // 반지름을 저장할 변수

		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius; // 이름과 반지름 저장 후
		p[i].setCircle(name, radius); // 객체의 함수에 변수를 넘겨줌
	}
}