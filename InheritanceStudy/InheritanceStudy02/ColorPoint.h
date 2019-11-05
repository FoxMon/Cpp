#ifndef __COLORPOINT__H_
#define __COLORPOINT__H_
#include "Point.h"
#include <string>

using std::string;

class ColorPoint : public Point { // Ŭ���� �����
private:
	string color; // ���� ������ ����

public:
	ColorPoint(); // default������ ����
	ColorPoint(int x, int y); // �Ű������� 2���� ������ ����
	void setPoint(int x, int y); // ��ǥ�� �����ϴ� �Լ� ����
	void setColor(string color); // ���� �����ϴ� �Լ� ����
	void show(); // ���� ������ ����ϴ� �Լ� ����
};
#endif