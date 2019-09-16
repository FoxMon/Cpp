#include "Date.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
	Date birth(2014, 3, 20); // 2014년 3월 20일
	Date independenceDay("1945/8/15"); // 1945년 8월 15일

	independenceDay.show(); // independenceDay객체의 날짜정보 출력

	cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl;

	return 0;
}