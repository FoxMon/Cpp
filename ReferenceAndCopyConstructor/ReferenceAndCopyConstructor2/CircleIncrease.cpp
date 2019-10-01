#include "Circle.h"
#include <iostream>

void increaseBy(Circle& cir1, Circle& cir2) { // 반지름을 더하는 함수 정의
	int tempRadius = cir1.getRadius() + cir2.getRadius(); // tempRadius변수를 cir1반지름과 cir2의 반지름 더한 값으로 초기화

	cir1.setRadius(tempRadius); //cir1객체의 반지름 tempRadius값으로 설정
}

int main(void) {
	Circle x(10), y(5); // 반지름이 10, 5인 원 객체 2개 생성
	
	increaseBy(x, y); // x의 반지름이 15인 원을 만들고자 한다.
	x.show(); // 원 x객체의 정보 출력

	return 0;
}

// increaseBy함수의 매개변수를 참조자로 설정하지 않으면 Call-By-Value로 호출이 되기 때문에 제대로 실행되지 않는다.
// 따라서 참조에 의한 호출로 이루어지도록 매개변수를 참조형으로 받아야한다.