#include "Random.h"

int Random::maxNum = 32767; // ���������� �ִ밪�� 32767�� �ʱ�ȭ

int Random::nextInt(int min, int max) { // min�� max������ ���� ������ �����ϴ� �Լ� ����
	return (rand() % ( max - min + 1)) + min;
}

char Random::nextAlphabet() { // ���� ���ĺ��� �����ϱ� ���� �Լ� ����
	int select; // ��ҹ��� �Ǻ��ϱ� ���� ����
	char ranChar; // ������ ���ĺ��� �����ϱ� ���� ����

	select = rand() % 2; // ¦���̸� �빮��, Ȧ���̸� �ҹ���
	select == 0 ? ranChar = (char)(nextInt(65, 90)) : ranChar = (char)(nextInt(97, 122)); // ���׿����ڸ� �̿��Ͽ� ���̸� �빮��, �����̸� �ҹ���

	return ranChar; // ���� ��ȯ
}

double Random::nextDouble() { // 0���� ũ�ų� ���� 1���� ���� �Ǽ��� �����ϱ� ���� �Լ� ����
	return (double)rand() / maxNum;
}