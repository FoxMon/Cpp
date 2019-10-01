#ifndef __DEPT__H_
#define __DEPT__H_
class Dept { // Ŭ���� �����
private:
	int size; // scores�迭�� ũ��
	int* scores; // ���� �Ҵ� ���� ���� �迭�� �ּ�

public:
	Dept(int size); // ������ ����
	Dept(const Dept& dept); // ���� ������ ����
	~Dept(); // �Ҹ��� ����
	int getSize(); // size���� ������ ����
	void read(); // size��ŭ Ű���忡�� ������ �о� scores�迭�� ������ �Լ� ����
	bool isOver60(int index); // index�� �л� ������ 60���� ũ�� true�����ϴ� �Լ� ����
};
#endif