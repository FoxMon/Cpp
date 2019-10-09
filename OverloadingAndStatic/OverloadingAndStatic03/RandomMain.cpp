#include <iostream>
#include "Random.h"

using std::cout;
using std::endl;

int main(void) {
	Random::seed(); // ���带 �ɾ��ְ�
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�." << endl;

	for (int i = 0; i < 10; i++) { // ������ ���� 10�� ���
		cout << Random::nextInt(1, 100) << ' ';
	}

	cout << endl;
	cout << "���ĺ��� �����ϰ� 10���� ����մϴ�." << endl;

	for (int i = 0; i < 10; i++) { // ������ ���ĺ� 10�� ���
		cout << Random::nextAlphabet() << ' ';
	}

	cout << endl;
	cout << "������ �Ǽ� 10���� ����մϴ�." << endl;

	for (int i = 0; i < 10; i++) { // ������ �Ǽ� 10�� ���
		cout << Random::nextDouble() << ' ';
	}

	cout << endl;

	return 0;
}