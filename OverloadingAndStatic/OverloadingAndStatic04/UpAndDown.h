#ifndef __UP_AND_DOWN_GAME__H_
#define __UP_AND_DOWN__GAME__H_
#include <cstdlib>
#include <ctime>

class UpAndDownGame {
private:
	static int minNum, maxNum; // min과 max를 저장할 static변수
public:
	static void seed() { srand((unsigned)time(NULL)); }
	static void startGame();
};
#endif