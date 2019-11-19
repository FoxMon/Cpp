#include <iostream>
#include "Circle.h"

using std::cout;
using std::endl;

template<class T>
T bigger(T a, T b) { // 두 개의 매개 변수를 비교하여 큰 값을 리턴
	if (a > b) { // a가 크면
		return a; // a 리턴
	}

	return b; // 그 외의 경우는 b 리턴
}

int main(void) {
	int a = 20, b = 50;
	int c;

	c = bigger(a, b); // 큰 값을 구함

	cout << "20과 50 중 큰 값은 >> " << c << endl;

	Circle waffle(10), pizza(20), y; // waffle객체 pizza객체, y 객체 생성
	
	y = bigger(waffle, pizza); // 큰 값을 구함 ( 제네릭 타입에 객체를 넣어 구체화 하면 연산자 재정의가 필요하게 되므로 연산자 재정의를 Circle클래스에 구현해야 함 )

	cout << "waffle과 pizza 중 큰 것의 반지름은 >> " << y.getRadius() << endl;

	return 0;
}