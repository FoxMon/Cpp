#include "LoopAdder.h"

class DoWhileLoopAdder : public LoopAdder { // Ŭ���� �����
protected: 
	int calculate(); // �����Ǿ�� �� calculate�Լ� ���� ���ϴ� �Լ��� ( �������̵� �ʿ� )

public:
	DoWhileLoopAdder(string name); // DoWhileLoopAdder�� ������ ����
};