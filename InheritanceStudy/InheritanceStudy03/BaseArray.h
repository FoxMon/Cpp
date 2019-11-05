#ifndef __BASEARRAY__H_
#define __BASEARRAY__H_
class BaseArray { // Ŭ���� �����
private:
	int capacity; // �迭�� ũ�⸦ �����ϴ� ����
	int* mem; // �����迭�� ����� ���� �޸��� ������

protected:
	BaseArray(int capacity = 100); // default���� ������ �ִ� �Ű������� �ϳ��� ������ ����
	~BaseArray(); // �Ҹ��� ����
	void put(int index, int val); // �迭�� ���� �ִ� �Լ� ����
	int get(int index); // �ش� �ε����� ���Ұ��� ��ȯ�ϴ� �Լ� ����
	int getCapacity(); // �迭�� ũ�⸦ ��ȯ�ϴ� �Լ� ����
};
#endif