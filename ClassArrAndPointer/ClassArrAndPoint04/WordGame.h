#ifndef __WORDGAME__H_
#define __WORDGAME__H_

#include "Player.h"

// WordGame Ŭ���� �����

class WordGame {
private:
	Player* p; // Player ��ü ������ ����
	int size; // �迭�� ũ�⸦ ������ ����

public:
	WordGame(int size); // �Ű������� �ϳ��� ������ ����
	~WordGame(); // �Ҹ��� ����
	void game(); // ������ �����ϴ� �Լ� ����
};

#endif