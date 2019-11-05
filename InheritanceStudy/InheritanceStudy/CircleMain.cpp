#include "NamedCircle.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	NamedCircle pizza[5]; // pizza객체 길이가 5인 배열 생성
	string name; // 이름을 입력받을 변수
	int radius; // 반지름을 입력받을 변수
	double max; // 원의 최대넓이를 가진 변수

	cout << "5개의 정수 반지름과 원의 이름을 입력하세요." << endl;

	for (int i = 0; i < 5; i++) { // 반지름과 이름을 5개 입력받음
		cout << i + 1 << ">> ";
		cin >> radius >> name;
		
		pizza[i].setCircle(radius, name); // pizza객체의 정보를 입력받은 값으로 초기화
	}

	max = pizza[0].getArea(); // 첫번째 원의 넓이를 기준으로 삼음

	for (int i = 1; i < 5; i++) { // 제일 큰 원의 면적을 구함
		if (max < pizza[i].getArea()) {
			max = pizza[i].getArea();
		}
	}

	for (int i = 0; i < 5; i++) { // 면적의 최대값을 가진 원의 이름을 찾음
		if (max == pizza[i].getArea()) { // 찾았다면
			cout << "가장 면적이 큰 피자는 " << pizza[i].getName() << "입니다." << endl; // 이름 출력 후

			break; // 반복문 탈출
		}
	}

	return 0;
}