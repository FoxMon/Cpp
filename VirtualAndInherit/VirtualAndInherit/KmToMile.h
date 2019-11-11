#ifndef __KMTOMILE__H_
#define __KMTOMILE__H_
#include "Converter.h"

class KmToMile : public Converter { // Ŭ���� ����� ( Converter Ŭ������ ��ӹ��� )
protected: // �����Ǿ�� �� ���������Լ�
	double convert(double src); // ���� ��ȯ �Լ� ( ��ȯ�� )
	string getSourceString();  // src ���� ��Ī�� ��ȯ�ϴ� �Լ� ( �ٲ�� �� )
	string getDestString(); // dest ���� ��Ī�� ��ȯ�ϴ� �Լ� ( �ٲ� �� )

public:
	KmToMile(double ratio); // KmToMile ������ ����
};
#endif