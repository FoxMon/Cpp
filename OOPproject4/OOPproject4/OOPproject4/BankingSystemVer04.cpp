#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

const int NAME_LEN = 20;

void Show_Menu(void); // �޴����
void Make_Account(void); // ���°����� ���� �Լ�
void Deposit_Money(void); // �Ա�
void Withdraw_Money(void); // ���
void Show_All_AccInfo(void); // �ܾ���ȸ

enum {
	MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT
};

class Account {
private:
	int accID; // ���¹�ȣ
	int balance; // �ܾ�
	char* cusName; // �����̸�

public:
	Account(int ID, int money, char* name)
		: accID(ID), balance(money) {
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
	}

	Account(const Account& ref)
		: accID(ref.accID), balance(ref.balance) {
		cusName = new char[strlen(ref.cusName) + 1];
		strcpy(cusName, ref.cusName);
	}

	int GetAccID() const {
		return accID;
	}

	void Deposit(int money) {
		balance += money;
	}

	int WithDraw(int money) {
		if (balance < money) {
			return 0;
		}

		balance -= money;

		return money;
	}

	void ShowAccInfo() const {
		cout << "����ID: " << accID << endl;
		cout << "�̸�: " << cusName << endl;
		cout << "�ܾ�: " << balance << endl;
	}

	~Account() {
		delete[]cusName;
	}
};

Account* accArr[100];
int accNum = 0;

int main(void) {
	int choice;

	while (1) {
		Show_Menu();

		cout << "����: ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case MAKE:
			Make_Account();
			break;
		case DEPOSIT:
			Deposit_Money();
			break;
		case WITHDRAW:
			Withdraw_Money();
			break;
		case INQUIRE:
			Show_All_AccInfo();
			break;
		case EXIT:
			for (int i = 0; i < accNum; i++) {
				delete accArr[i];
			}

			return 0;
		default:
			cout << "Illegal Selection..." << endl;
		}
	}

	return 0;
}

void Show_Menu(void) {
	cout << "----Menu----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void Make_Account(void) {
	int id;
	int balance;
	char name[NAME_LEN];

	cout << "[���°���]" << endl;
	cout << "����ID : "; cin >> id;
	cout << "�̸�: "; cin >> name;
	cout << "�Աݾ�: "; cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);
}

void Deposit_Money(void) {
	int money;
	int id;

	cout << "[��  ��]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "�Աݾ�: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) {
			accArr[i]->Deposit(money);

			cout << "�ԱݿϷ�" << endl << endl;

			return;
		}
	}

	cout << "��ȿ���� ���� ID�Դϴ�." << endl;
}

void Withdraw_Money(void) {
	int money;
	int id;

	cout << "[��  ��]" << endl;
	cout << "����ID: ";
	cin >> id;
	cout << "��ݾ�: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) {
			if (accArr[i]->WithDraw(money) == 0) {
				cout << "�ܾ׺���" << endl << endl;

				return;
			}

			cout << "��ݿϷ�" << endl;

			return;
		}
	}

	cout << "��ȿ���� ���� ID�Դϴ�." << endl;
}

void Show_All_AccInfo(void) {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->ShowAccInfo();

		cout << endl;
	}
}