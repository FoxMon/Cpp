#define _CRT_SECURE_NO_WARNINGS

#include "Date.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

// DateŬ������ ������

Date::Date(int y, int m, int d) // �Ű������� 3���� Date������ ����
	: year(y), month(m), day(d) { // ������ ������ �Ű������� ����
	// Empty
}

Date::Date(const char* tempDate) { // �Ű������� 1���� Date������ ����
	year = atoi(strtok(_strdup(tempDate), "/")); // tempDate�� ù�κк��� / �� ��������� ���ڿ� �ڸ� ��, int�� ��ȯ
	month = atoi(strtok(NULL, "/")); // ���������� ���ڿ� �ڸ��� int�� ��ȯ �� ����
	day = atoi(strtok(NULL, "/"));
}

void Date::show() { // ��¥���� ����ϴ� �Լ� ����
	cout << year << "��" << month << "��" << day << "��" << endl;
}

int Date::getDay() { // day��������� ������ �� �ִ� �Լ� ����
	return day;
}

int Date::getMonth() { // month��������� ������ �� �ִ� �Լ� ����
	return month;
}

int Date::getYear() { // yeear��������� ������ �� �ִ� �Լ� ����
	return year;
}