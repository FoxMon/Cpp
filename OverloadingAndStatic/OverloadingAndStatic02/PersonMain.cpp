#include "Person.h"

int main(void) {
	Person grace, ashley(2, "Ashlley"), helen(3, "Hellen", 32.5); // ��ü 3�� ����

	grace.show(); // �� ��ü�� ���� ���
	ashley.show();
	helen.show();

	return 0;
}