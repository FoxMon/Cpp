#include "ColorPoint.h"

int main(void) {
	ColorPoint zeroPoint; // Black ���� (0, 0)��ġ�� zeroPoint��ü ����
	zeroPoint.show(); // zeroPoint��ü�� ���� ���

	ColorPoint cp(5, 5); // Black ���� (5, 5)��ġ�� cp��ü ����
	cp.setPoint(10, 20); // x, y��ǥ�� 10 20���� ����
	cp.setColor("BLUE"); // ���� Blue�� ����
	cp.show(); // cp��ü�� ���� ���

	return 0;
}