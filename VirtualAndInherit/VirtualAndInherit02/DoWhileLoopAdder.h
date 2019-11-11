#include "LoopAdder.h"

class DoWhileLoopAdder : public LoopAdder { // 클래스 선언부
protected: 
	int calculate(); // 구현되어야 할 calculate함수 합을 구하는 함수임 ( 오버라이딩 필요 )

public:
	DoWhileLoopAdder(string name); // DoWhileLoopAdder의 생성자 선언
};