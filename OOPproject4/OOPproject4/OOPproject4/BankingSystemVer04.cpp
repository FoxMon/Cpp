#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

const int NAME_LEN = 20;

void Show_Menu(void); // 메뉴출력
void Make_Account(void); // 계좌개설을 위한 함수
void Deposit_Money(void); // 입금
void Withdraw_Money(void); // 출금
void Show_All_AccInfo(void); // 잔액조회

enum {
	MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT
};

class Account {
private:
	int accID; // 계좌번호
	int balance; // 잔액
	char* cusName; // 고객이름

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
		cout << "계좌ID: " << accID << endl;
		cout << "이름: " << cusName << endl;
		cout << "잔액: " << balance << endl;
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

		cout << "선택: ";
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
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void Make_Account(void) {
	int id;
	int balance;
	char name[NAME_LEN];

	cout << "[계좌개설]" << endl;
	cout << "계좌ID : "; cin >> id;
	cout << "이름: "; cin >> name;
	cout << "입금액: "; cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);
}

void Deposit_Money(void) {
	int money;
	int id;

	cout << "[입  금]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "입금액: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) {
			accArr[i]->Deposit(money);

			cout << "입금완료" << endl << endl;

			return;
		}
	}

	cout << "유효하지 않은 ID입니다." << endl;
}

void Withdraw_Money(void) {
	int money;
	int id;

	cout << "[출  금]" << endl;
	cout << "계좌ID: ";
	cin >> id;
	cout << "출금액: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) {
			if (accArr[i]->WithDraw(money) == 0) {
				cout << "잔액부족" << endl << endl;

				return;
			}

			cout << "출금완료" << endl;

			return;
		}
	}

	cout << "유효하지 않은 ID입니다." << endl;
}

void Show_All_AccInfo(void) {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->ShowAccInfo();

		cout << endl;
	}
}