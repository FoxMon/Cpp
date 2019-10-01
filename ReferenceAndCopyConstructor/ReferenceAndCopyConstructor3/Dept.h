#ifndef __DEPT__H_
#define __DEPT__H_
class Dept { // 클래스 선언부
private:
	int size; // scores배열의 크기
	int* scores; // 동적 할당 받을 정수 배열의 주소

public:
	Dept(int size); // 생성자 선언
	Dept(const Dept& dept); // 복사 생성자 선언
	~Dept(); // 소멸자 선언
	int getSize(); // size변수 접근자 선언
	void read(); // size만큼 키보드에서 정수를 읽어 scores배열에 저장할 함수 선언
	bool isOver60(int index); // index의 학생 성적이 60보다 크면 true리턴하는 함수 선언
};
#endif