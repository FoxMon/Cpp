#include <iostream>
#include "Circle.h"

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	int size; // 객체배열의 크기 입력받을 변수
	int count = 0; // 카운트 한 값을 넣을 변수

	cout << "원의 개수 >> ";
	cin >> size; // 원의 개수 입력받음

	Circle* cirArr = new Circle[size]; // size의 개수만큼 객체배열 동적 생성
	
	if (!cirArr) { // 메모리 동적 할당에 실패했다먼
		cout << "메모리 할당에 실패했습니다."; // 이 문장을 출력 후

		return 0; // 함수 종료
	}
	
	for (int i = 0; i < size; i++) { // size만큼 for문 수행
		int radius; // 반지름값 입력받을 radius지역변수 선언

		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> radius; // radius에 반지름 입력받고
		cirArr[i].setRadius(radius); // 함수에 넘겨줌

		if (cirArr[i].getArea() > 100) { // 만약 면적이 100보다 크다면
			count++; // count의 값 증가시킴
		}
	}

	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl; // 면적이 100보다 큰 원의 개수 출력

	delete[] cirArr; // 메모리 반환

	return 0;
}