#ifndef __DATE__H_
#define __DATE__H_

class Date { // Date클래스의 선언부
private:
	int year; // 년도를 저장하는 year변수
	int month; // 달을 저장하는 month변수
	int day; // 일을 저장하는 day변수
public:
	Date(const char *date); // 매개변수가 1개인 생성자선언
	Date(int year, int month, int day); // 매개변수가 3개인 생성자선언
	void show(); // 날짜정보 전체를 출력하는 함수선언
	int getYear(); // year변수에 접근할 수 있는 함수 선언
	int getMonth(); // month번수에 접근할 수 있는 함수 선언
	int getDay(); // day변수에 접근할 수 있는 함수 선언
};
#endif