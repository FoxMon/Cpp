#include "Sample.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// 클래스 구현부

Sample::Sample(int n) { // 매개변수가 1개인 생성자 정의
	size = n; // 배열의 개수 저장
	p = new int[n]; // n개의 정수 배열의 동적 생성
}

void Sample::read() { // 동적 할당받은 정수배열 p에 사용자로부터 정수를 입력는 함수 정의
	for (int i = 0; i < size; i++) { // 배열의 크기만큼 for문 실행
		cin >> p[i]; // 사용자로부터 입력받은 수를 배열에 저장
	}
}

void Sample::write() { // 정수배열을 화면에 출력하는 함수 정의
	for (int i = 0; i < size; i++) { // 배열의 원소 개수만큼 for문 실행
		cout << p[i] << " "; // 배열의 각 원소 출력
	}

	cout << endl; // 개행
}

int Sample::big() { // 정수배열에서 가장 큰 수 리턴하는 함수 정의
	int max = p[0]; // 배열의 첫 번째 원소 대입

	for (int i = 1; i < size; i++) { // 두 번째 인덱스부터 실행
		if (max <= p[i]) { // max보다 배열의 원소가 더 크면
			max = p[i]; // max에 그 값을 대입
		}
	}

	return max; // 가장 큰 값 반환
}

Sample::~Sample() { // 소멸자 정의 (소멸자에서 메모리 반환 실행)
	delete[] p; // p 의 메모리 반환
}