/*
* File name : BankingCommonDecl.h
* Ver.07
*/

#ifndef __BANKING_COMMON_H__
#define __BANKING_COMMON_H__

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

const int NAME_LEN = 20;

enum { // ������� ���� �޴�
	MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT
};

enum { // �ſ���
	LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2
};

enum { // ������ ����
	NORMAL = 1, CREDIT = 2
};

#endif