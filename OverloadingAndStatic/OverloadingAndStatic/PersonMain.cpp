#include "Person.h"

int main(void) {
	Person grace, ashley(2, "Ashlley"), helen(3, "Hellen", 32.5); // 객체 3개 생성

	grace.show(); // 각 객체의 정보 출력
	ashley.show();
	helen.show();

	return 0;
}