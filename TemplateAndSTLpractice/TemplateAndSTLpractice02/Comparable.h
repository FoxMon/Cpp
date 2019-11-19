#ifndef __COMPARABLE__H_
#define __COMPARABLE__H_
class Comparable { // �߻� Ŭ���� �����
public:
	virtual bool operator > (Comparable& op2) = 0; // ���� ���� �Լ�
	virtual bool operator < (Comparable& op2) = 0; // ���� ���� �Լ�
	virtual bool operator == (Comparable& op2) = 0; // ���� ���� �Լ�
};
#endif