#include "LoopAdder.h"

class WhileLoopAdder : public LoopAdder { // Ŭ���� �����
protected:
	int calculate(); // �����Ǿ�� �� calculate�Լ� x���� y������ ���� ���ϴ� �Լ� ( �������̵� �ʿ� )

public:
	WhileLoopAdder(string name); // WhileLoopAdder�� ������ ����
};