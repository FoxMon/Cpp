#include "Tower.h"

// Ŭ������ ������

Tower::Tower() // default ������ ����
	: height(1) { // height������ 1�� �ʱ�ȭ
	// Empty
}

Tower::Tower(int h) { // �Ű������� �ִ� ������ ����
	height = h; // height ������ h�� �־ �ʱ�ȭ
}

int Tower::getHeight() { // height������ ������ �� �ִ� �Լ�����
	return height; // height���� ��ȯ
}