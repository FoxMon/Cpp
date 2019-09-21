#include "WordGame.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// Ŭ���� ������

WordGame::WordGame(int size)  // �Ű������� �ϳ��� ������ ����
	: size(size) {
	p = new Player[size]; // size�� ũ�⸸ŭ ��ü�迭 ���� �Ҵ�
}

WordGame::~WordGame() { // �Ҹ��� ����
	delete[] p;
}

void WordGame::game() { // ������ �����ϴ� �Լ� ����
	for (int i = 0; i < size; i++) {
		string name; // �̸��� ������ name�������� ����

		cout << "�������� �̸��� �Է��ϼ���.    ��ĭ ���� >> ";
		cin >> name; // name������ �̸� ����

		p[i].setName(name); // �̸��� �����ϴ� �Լ��� �� ����	
	}

	cout << "�����ϴ� �ܾ�� �ƹ����Դϴ�." << endl;

	string startWord = "�ƹ���"; // ���� �ܾ �ƹ����� ����
	string afterWord; // �̾ �� �ܾ �����ϴ� ����
	int orderIndex = 0; // Player ������ �����ϴ� ����

	while (true) { // Ż���ڰ� ���� ������ while�� ���� �ݺ�
		if (orderIndex == size) { // size�� �������� 0���� �ٽ� ����
			orderIndex = 0; // ù ������ ���ư�
		}
		
		cout << p[orderIndex].getName() << ">> ";
		cin >> afterWord; // �̾ �� �ܾ ���� �Է�
		
		if (afterWord.length() > 6) { // 3���ڰ� �ƴ϶��
			cout << "3���� ���Ϸ� �ٽ� �Է��� �ּ���." << endl; // �� ���� ��� ��

			continue; // while���� ó������ �ٽ�
		}

		int wordSize = startWord.size(); // ���� ���� �ι���Ʈ�� ���ϱ� ���� ����(�ѱ���� 2����Ʈ�̱� ������ wordSize�� 6�̴�)

		if (startWord.at(wordSize -2) == afterWord.at(0) && startWord.at(wordSize -1) == afterWord.at(1)) { // ������ ���ڿ� ù ���ڰ� ���ٸ�
			startWord = afterWord; // ù ���ڸ� ������ ���ڷ� �ٲ���
		}
		else { // Ʋ�����
			cout << p[orderIndex % size].getName() << " Ʋ�Ƚ��ϴ�." << endl; // �� ���� ��� ��
			
			break; // �ݺ��� ����(��������)
		}

		orderIndex++; // ���������� �Ѿ
	}
}