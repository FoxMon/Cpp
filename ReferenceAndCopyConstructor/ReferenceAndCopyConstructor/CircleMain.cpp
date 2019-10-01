#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

void swap(Circle& cir1, Circle& cir2) { // 객체를 바꾸는 함수 정의
	Circle temp = cir1; // 임시객체 temp를 cir1으로 초기화하고
	cir1 = cir2; // cir1에 cir2대입
	cir2 = temp; // cir2에는 cir1으로 바꿈
}

int main(void) {
	Circle cir1(10), cir2(20); // 2개의 Circle객체 생성
	
	cout << "객체가 바뀌기 전 반지름" << endl;
	cout << "Cir1객체의 반지름 : " << cir1.getRadius() << " Cir2객체의 반지름 : " << cir2.getRadius() << endl;

	swap(cir1, cir2); // 두 객체를 서로 바꿔줌
	
	cout << "객체가 바뀐 후 반지름" << endl;
	cout << "Cir1객체의 반지름 : " << cir1.getRadius() << " Cir2객체의 반지름 : " << cir2.getRadius() << endl;

	return 0;
}