#include "Exp.h"

// 함수의 구현부

Exp::Exp() // default 생성자 정의
	: baseNum(1), expNum(1) { // 각각의 멤버변수에 1로 초기화
	// Empty
}

Exp::Exp(int baseN) // 매개변수가 1개인 생성자 정의
	: baseNum(baseN), expNum(1) { // baseNum멤버변수에 baseN의 매개변수를 넣고, expNum의 초기값은 1로 초기화
	// Empty
}

Exp::Exp(int baseN, int expN) // 매개변수가 2개인 생성자 정의
	: baseNum(baseN), expNum(expN) { // baseNum과 expNum에 매개변수로 대입하여 초기화
	// Empty
}

int Exp::getBase() { // baseNum멤버변수에 접근할 수 있는 함수 정의
	return baseNum;
}

int Exp::getValue() { // 지수를 정수로 계산하여 반환하는 함수 정의
	int result = 1; // 지수를 정수로 계산한 결과를 저장할 변수 처음에 1로 초기화

	if (expNum == 0) { // 만약 지수가 0이면 1을 반환함
		return result;
	}

	for (int i = 0; i < expNum; i++) { // expNum의 값 만큼 반복하여 결과값을 구함
		result *= baseNum;
	}

	return result; // 그리고 값을 반환
}

int Exp::getExp() { // Exp멤버변수에 접근할 수 있는 함수 정의 
	return expNum;
}

bool Exp::equals(Exp b) { // 이 객체와 객체 b의 값이 같은지 판별하는 함수 정의
	if (getValue() == b.getValue()) { // 이 객체의 value값과 b객체의 value값이 같으면
		return true; // true리턴
	}

	return false; // 아닐 경우 false 리턴
}