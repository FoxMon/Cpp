#ifndef __RANDOM__H_
#define __RANDOM__H_
#include <cstdlib>
#include <ctime>

class Random {
private:
	static int maxNum; // 랜덤범위의 최대값

public:
	static void seed() { srand((unsigned)time(NULL)); }; // 항상 다른 랜덤수를 발생시키기 위한 seed를 설정하는 함수
	static int nextInt(int min = 0, int max = 32767); // min과 max사이의 랜덤 정수 리턴
	static char nextAlphabet(); // 랜덤 알파벳 문자 리턴
	static double nextDouble(); // 0보다 크거나 같고 1보다 적은 랜덤 실수 리턴
};
#endif