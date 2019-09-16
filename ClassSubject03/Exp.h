#ifndef __EXP__H_
#define __EXP__H_
class Exp { // �Լ��� �����
private:
	int baseNum; // ���̽� ���ڸ� ������ ����
	int expNum; // ������ ������ ����
public:
	Exp(); // default������ ����
	Exp(int baseN); // �Ű������� 1���� ������ ����
	Exp(int baseN, int expN); // �Ű������� 2���� ������ ����

	int getValue(); // ������ ������ ����Ͽ� �����ϴ� �Լ� ����
	int getBase(); // ���̽��� �� �����ϴ� �Լ� ����
	int getExp(); // ������ �� �����ϴ� �Լ� ����
	bool equals(Exp b); // �� ��ü�� ��ü b�� ���� ������ �Ǻ��Ͽ� �����ϴ� �Լ� ����
};
#endif