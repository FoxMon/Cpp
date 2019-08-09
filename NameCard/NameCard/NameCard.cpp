#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

namespace COM_POS {
	enum {
		CLERK, SENIOR, ASSIST, MANAGER
	};

	void Show_Position_Info(int pos) {
		switch (pos) {
		case CLERK:
			cout << "사원" << endl;
			break;
		case SENIOR:
			cout << "주임" << endl;
			break;
		case ASSIST:
			cout << "대리" << endl;
			break;
		case MANAGER:
			cout << "과장" << endl;
		}
	}
}

class NameCard {
private:
	char *name;
	char *company;
	char *phone;
	int position;

public:
	NameCard(const char* _name, const char* _company, const char* _phone, const int pos)
		:position(pos) {
		name = new char[strlen(_name) + 1];
		company = new char[strlen(_company) + 1];
		phone = new char[strlen(_phone) + 1];

		strcpy(name, _name);
		strcpy(company, _company);
		strcpy(phone, _phone);
	}

	void Show_NameCard_Info() {
		cout << "이름: " << name << endl;
		cout << "회사: " << company << endl;
		cout << "전화번호: " << phone << endl;
		cout << "직급: ";

		COM_POS::Show_Position_Info(position);

		cout << endl;
	}

	~NameCard() {
		delete []name;
		delete []company;
		delete []phone;
	}
};

int main(void) {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COM_POS::CLERK);
	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COM_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COM_POS::ASSIST);
	
	manClerk.Show_NameCard_Info();
	manSenior.Show_NameCard_Info();
	manAssist.Show_NameCard_Info();

	return 0;
}