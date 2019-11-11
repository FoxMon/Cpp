#include "KmToMile.h"

// Ŭ���� ������

KmToMile::KmToMile(double ratio) // KmToMile������ ����
	: Converter(ratio) { } // �⺻Ŭ������ ������ ȣ���Ͽ� ratio �ʱ�ȭ

// �߻� Ŭ������ ���� ( �Լ� �������̵��� �̿��� )

double KmToMile::convert(double src) { return src / ratio; } // ( ��ȯ�� ) ���� 
string KmToMile::getSourceString() { return "Km"; } // ( src ���� ��Ī �Լ� ���� )
string KmToMile::getDestString() { return "Mile"; } // ( dest ���� ��Ī �Լ� ���� )