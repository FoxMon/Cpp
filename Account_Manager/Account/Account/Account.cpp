#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
const int Name_Len = 20;

typedef struct {
	int accID; // 계좌번호
	int balance; // 잔액
	char cusName[Name_Len]; // 고객이름
}Account;

Account cusInfo[100];
int accCnt = 0;

void Show_Menu(void);
void Create_Account(void);
void Deposit_Money(void);
void Withdraw_Moeny(void);
void Show_All_Info(void);

int main(void)
{
	int choice;

	while (1)
	{
		Show_Menu();

		cout << "선택: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			Create_Account();
			break;
		case DEPOSIT:
			Deposit_Money();
			break;
		case WITHDRAW:
			Withdraw_Moeny();
			break;
		case INQUIRE:
			Show_All_Info();
			break;
		case EXIT:
			cout << "Exit Menu..." << endl;
			return 0;
		default:
			cout << "Illegal selection..." << endl;
			break;
		}
	}
}

void Show_Menu(void)
{
	cout << "[---MENU---]" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void Create_Account(void)
{
	int account;
	int money;
	char name[Name_Len];

	cout << "[ 계좌개설 ]" << endl;
	cout << "계좌 ID : ";
	cin >> account;
	cout << "이 름 : ";
	cin >> name;
	cout << "입금액 : ";
	cin >> money;

	cusInfo[accCnt].accID = account;
	cusInfo[accCnt].balance = money;
	strcpy(cusInfo[accCnt].cusName, name);

	accCnt++;
}

void Deposit_Money(void)
{
	int id;
	int money;

	cout << "[ 입  금 ]" << endl;
	cout << " 계좌ID :  ";
	cin >> id;
	cout << " 입금액 : ";
	cin >> money;

	for (int i = 0; i < accCnt; i++)
	{
		if (id == cusInfo[i].accID)
		{
			cusInfo[i].balance += money;
			break;
		}
	}
}

void Withdraw_Moeny(void)
{
	int id;
	int money;

	cout << "[ 출  금 ]" << endl;
	cout << " 계좌ID :  ";
	cin >> id;
	cout << " 출금액 : ";
	cin >> money;

	for (int i = 0; i < accCnt; i++)
	{
		if (id == cusInfo[i].accID)
		{
			cusInfo[i].balance -= money;
			break;
		}
	}
}

void Show_All_Info(void)
{
	for (int i = 0; i < accCnt; i++)
	{
		cout << "계좌 ID : " << cusInfo[i].accID << endl;
		cout << "고객 이름 : " << cusInfo[i].cusName << endl;
		cout << "계좌 잔액 : " << cusInfo[i].balance << endl;
	}
}