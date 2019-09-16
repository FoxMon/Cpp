#define _CRT_SECURE_NO_WARNINGS

#include "Date.h"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

// Date클래스의 구현부

Date::Date(int y, int m, int d) // 매개변수가 3개인 Date생성자 정의
	: year(y), month(m), day(d) { // 각각의 변수에 매개변수를 대입
	// Empty
}

Date::Date(const char* tempDate) { // 매개변수가 1개인 Date생성자 정의
	year = atoi(strtok(_strdup(tempDate), "/")); // tempDate의 첫부분부터 / 가 나오기까지 문자열 자른 후, int로 변환
	month = atoi(strtok(NULL, "/")); // 마찬가지로 문자열 자르고 int로 변환 후 대입
	day = atoi(strtok(NULL, "/"));
}

void Date::show() { // 날짜정보 출력하는 함수 정의
	cout << year << "년" << month << "월" << day << "일" << endl;
}

int Date::getDay() { // day멤버변수에 접근할 수 있는 함수 정의
	return day;
}

int Date::getMonth() { // month멤버변수에 접근할 수 있는 함수 정의
	return month;
}

int Date::getYear() { // yeear멤버변수에 접근할 수 있는 함수 정의
	return year;
}