#include "Player.h"

// Ŭ���� ������


Player::Player() // default������ ����
	: name("") { // �⺻���� ���°� ����
	// Empty
}

void Player::setName(string name) { // ������ �̸��� �����ϴ� �Լ� ����
	this->name = name; // name������ �̸� ����
}

string Player::getName() { // ������ �̸� ��ȯ�ϴ� �Լ� ����
	return name; // �̸� ��ȯ
}