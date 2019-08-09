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
			cout << "���" << endl;
			break;
		case SENIOR:
			cout << "����" << endl;
			break;
		case ASSIST:
			cout << "�븮" << endl;
			break;
		case MANAGER:
			cout << "����" << endl;
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
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȭ��ȣ: " << phone << endl;
		cout << "����: ";

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