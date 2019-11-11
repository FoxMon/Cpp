#include "DoWhileLoopAdder.h"
#include "WhileLoopAdder.h"

int main(void) {
	WhileLoopAdder whileLoop("While Loop"); // WhileLoopAdder��ü ����
	DoWhileLoopAdder doWhileLoop("Do while Loop"); // DoWhileLoopAdder��ü ����

	whileLoop.run(); // while�� ����
	doWhileLoop.run(); // do-while�� ����

	return 0;
}