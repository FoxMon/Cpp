#include "LoopAdder.h"

class WhileLoopAdder : public LoopAdder { // 클래스 선언부
protected:
	int calculate(); // 구현되어야 할 calculate함수 x부터 y까지의 합을 더하는 함수 ( 오버라이딩 필요 )

public:
	WhileLoopAdder(string name); // WhileLoopAdder의 생성자 선언
};