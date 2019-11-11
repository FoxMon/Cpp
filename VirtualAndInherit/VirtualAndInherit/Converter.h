#ifndef __CONVERTER__H_
#define __CONVERTER__H_
#include <string>

using std::string;

class Converter { // �߻� Ŭ���� �����
protected:
	double ratio; // ������ �����ϴ� ����
	
	virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ�ϴ� ���� ���� �Լ�
	virtual string getSourceString() = 0; // src ���� ��Ī�� ��ȯ�ϴ� ���� ���� �Լ�
	virtual string getDestString() = 0; // dest ���� ��Ī�� ��ȯ�ϴ� ���� ���� �Լ�

public:
	Converter(double ratio); // �Ű������� �� �� ���� Converter������ ����
	void run(); // ��ȯ�⸦ �����Ű�� �Լ� ����
};
#endif