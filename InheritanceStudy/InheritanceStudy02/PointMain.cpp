#include "ColorPoint.h"

int main(void) {
	ColorPoint zeroPoint; // Black 색에 (0, 0)위치한 zeroPoint객체 생성
	zeroPoint.show(); // zeroPoint객체의 정보 출력

	ColorPoint cp(5, 5); // Black 색에 (5, 5)위치한 cp객체 생성
	cp.setPoint(10, 20); // x, y좌표를 10 20으로 설정
	cp.setColor("BLUE"); // 색을 Blue로 설정
	cp.show(); // cp객체의 정보 출력

	return 0;
}