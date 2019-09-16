#include "Date.h"
#include <iostream>

using std::cout;
using std::endl;

int main(void) {
	Date birth(2014, 3, 20); // 2014�� 3�� 20��
	Date independenceDay("1945/8/15"); // 1945�� 8�� 15��

	independenceDay.show(); // independenceDay��ü�� ��¥���� ���

	cout << birth.getYear() << ", " << birth.getMonth() << ", " << birth.getDay() << endl;

	return 0;
}