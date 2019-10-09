#include "UpAndDown.h"
#include "Person.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int UpAndDownGame::minNum = 0; // �ּҼ��� 0���� ����
int UpAndDownGame::maxNum = 100; // �ִ���� 100���� ����

void UpAndDownGame::startGame() {
	Person player[2]; // �÷��̾� ��ü 2�� ����
	
	cout << "Up & Down ������ �����մϴ�. �÷��̾�� 2���Դϴ�." << endl;
	cout << "�÷��̾��� �̸��� �������ּ���..." << endl;

	for (int i = 0; i < 2; i++) {
		string name; // �̸��� ������ ����

		cout << i + 1 << "�� ° �÷��̾� �̸��� �Է����ּ��� >> ";
		getline(cin, name, '\n'); // �̸��� �Է¹���
		player[i].setName(name); // �÷��̾� �̸� ����
	}

	UpAndDownGame::seed(); // ���弳��

	cout << "������ �����մϴ�...!!" << endl << endl;
	cout << "���� " << minNum << "�� " << maxNum << "���̿� �ֽ��ϴ�." << endl; // ���� ������ �˷���

	int correct = (rand() % 100) + 1; // 1~100������ ���� ���� ����

	while (1) {
		for (int i = 0; i < 2; i++) {
			int tempNum; // Player���ڸ� ������ ����

			cout << player[i].getName() << ">> ";
			cin >> tempNum; // player�� ���ڸ� �Է¹ް�
			player[i].setNum(tempNum); // ���� ����

			if (player[i].getNum() == correct) { // �����̶��
				cout << player[i].getName() << "(��)�� �̰���ϴ�.!!!" << endl;

				return; // �Լ� ����
			}

			player[i].getNum() > correct ? maxNum = player[i].getNum() : minNum = player[i].getNum(); // ���亸�� ���ٸ� max�� �÷��̾��� ���� �ƴϸ� �� �ݴ��
			cout << "���� " << minNum << "�� " << maxNum << "���̿� �ֽ��ϴ�." << endl; // ���� ������ �˷���
		}
	}
}	