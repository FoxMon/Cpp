#include <iostream>
#include "Random.h"

using std::cout;
using std::endl;

int main(void) {
	Random::seed(); // 씨드를 심어주고
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << endl;

	for (int i = 0; i < 10; i++) { // 랜덤한 정수 10개 출력
		cout << Random::nextInt(1, 100) << ' ';
	}

	cout << endl;
	cout << "알파벳을 랜덤하게 10개를 출력합니다." << endl;

	for (int i = 0; i < 10; i++) { // 랜덤한 알파벳 10개 출력
		cout << Random::nextAlphabet() << ' ';
	}

	cout << endl;
	cout << "랜덤한 실수 10개를 출력합니다." << endl;

	for (int i = 0; i < 10; i++) { // 랜덤한 실수 10개 출력
		cout << Random::nextDouble() << ' ';
	}

	cout << endl;

	return 0;
}