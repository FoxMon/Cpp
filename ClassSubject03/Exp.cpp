#include "Exp.h"

// �Լ��� ������

Exp::Exp() // default ������ ����
	: baseNum(1), expNum(1) { // ������ ��������� 1�� �ʱ�ȭ
	// Empty
}

Exp::Exp(int baseN) // �Ű������� 1���� ������ ����
	: baseNum(baseN), expNum(1) { // baseNum��������� baseN�� �Ű������� �ְ�, expNum�� �ʱⰪ�� 1�� �ʱ�ȭ
	// Empty
}

Exp::Exp(int baseN, int expN) // �Ű������� 2���� ������ ����
	: baseNum(baseN), expNum(expN) { // baseNum�� expNum�� �Ű������� �����Ͽ� �ʱ�ȭ
	// Empty
}

int Exp::getBase() { // baseNum��������� ������ �� �ִ� �Լ� ����
	return baseNum;
}

int Exp::getValue() { // ������ ������ ����Ͽ� ��ȯ�ϴ� �Լ� ����
	int result = 1; // ������ ������ ����� ����� ������ ���� ó���� 1�� �ʱ�ȭ

	if (expNum == 0) { // ���� ������ 0�̸� 1�� ��ȯ��
		return result;
	}

	for (int i = 0; i < expNum; i++) { // expNum�� �� ��ŭ �ݺ��Ͽ� ������� ����
		result *= baseNum;
	}

	return result; // �׸��� ���� ��ȯ
}

int Exp::getExp() { // Exp��������� ������ �� �ִ� �Լ� ���� 
	return expNum;
}

bool Exp::equals(Exp b) { // �� ��ü�� ��ü b�� ���� ������ �Ǻ��ϴ� �Լ� ����
	if (getValue() == b.getValue()) { // �� ��ü�� value���� b��ü�� value���� ������
		return true; // true����
	}

	return false; // �ƴ� ��� false ����
}