#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };
const int Name_Len = 20;

typedef struct {
	int accID; // ���¹�ȣ
	int balance; // �ܾ�
	char cusName[Name_Len]; // ���̸�
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

		cout << "����: ";
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
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void Create_Account(void)
{
	int account;
	int money;
	char name[Name_Len];

	cout << "[ ���°��� ]" << endl;
	cout << "���� ID : ";
	cin >> account;
	cout << "�� �� : ";
	cin >> name;
	cout << "�Աݾ� : ";
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

	cout << "[ ��  �� ]" << endl;
	cout << " ����ID :  ";
	cin >> id;
	cout << " �Աݾ� : ";
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

	cout << "[ ��  �� ]" << endl;
	cout << " ����ID :  ";
	cin >> id;
	cout << " ��ݾ� : ";
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
		cout << "���� ID : " << cusInfo[i].accID << endl;
		cout << "�� �̸� : " << cusInfo[i].cusName << endl;
		cout << "���� �ܾ� : " << cusInfo[i].balance << endl;
	}
}