#ifndef __DATE__H_
#define __DATE__H_

class Date { // DateŬ������ �����
private:
	int year; // �⵵�� �����ϴ� year����
	int month; // ���� �����ϴ� month����
	int day; // ���� �����ϴ� day����
public:
	Date(const char *date); // �Ű������� 1���� �����ڼ���
	Date(int year, int month, int day); // �Ű������� 3���� �����ڼ���
	void show(); // ��¥���� ��ü�� ����ϴ� �Լ�����
	int getYear(); // year������ ������ �� �ִ� �Լ� ����
	int getMonth(); // month������ ������ �� �ִ� �Լ� ����
	int getDay(); // day������ ������ �� �ִ� �Լ� ����
};
#endif