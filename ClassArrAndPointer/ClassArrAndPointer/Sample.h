#ifndef __SAMPLE__H_
#define __SAMPLE__H_

class Sample { // 클래스 선언부
private:
	int* p; // n개의 정수 배열을 동적할당할 포인터 변수
	int size; // 배열원소의 개수를 저장할 변수

public:
	Sample(int n); // 매개변수가 한개인 생성자 선언
	void read(); // 동적 할당받은 정수 배열 p에 사용자로부터 정수를 입력받는 함수 선언
	void write(); // 정수 배열을 화면에 출력할 함수 선언
	int big(); // 정수 배열에서 가장 큰 수 리턴하는 함수 선언
	~Sample(); // 소멸자 선언
};

#endif