#ifndef __PLAYER__H_
#define __PLAYER__H_

#include <string>

using std::string;

// Player Ŭ���� �����

class Player { 
private:
	string name; // ������ �̸� ����

public:
	Player(); // default ������ ����
	void setName(string name); // ������ �̸��� �����ϴ� �Լ� ����
	string getName(); // ������ �̸��� ��ȯ�ϴ� �Լ� ����
};

#endif