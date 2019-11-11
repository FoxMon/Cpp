#ifndef __LOOPADDER__H_
#define __LOOPADDER__H_
#include <string>

using std::string;

class LoopAdder { // Ŭ���� �����
private:
	string name; // ������ �̸�
	int x, y, sum; // ��������(x) �� ����(y) �� ��� ���� ���� �����ϴ� sum ����
	
	void read(); // x, y�� ���� �о� ���̴� �Լ� ����
	void write(); // sum�� ����ϴ� �Լ� ����

protected:
	LoopAdder(string name = ""); // LoopAdder�� ������ ���� default�Ű������� ������ ����
	int getX(); // x�� ���� ��ȯ�ϴ� �Լ� ����
	int getY(); // y�� ���� ��ȯ�ϴ� �Լ� ����
	virtual int calculate() = 0; // ���� ���� �Լ� ����. ������ ���� ���� ���ϴ� �Լ�

public:
	void run(); // ������ �����ϴ� �Լ� ����
};
#endif