#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

class Person {
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;

		name = new char[len];

		strcpy(name, myname);
		
		age = myage;
	}

	Person() {
		name = NULL;
		age = 0;

		cout << "called Person() Constructor!" << endl;
	}

	void Set_Person_Info(char* myname, int myage) {
		name = myname;
		age = myage;
	}

	void Show_Person_Info() const {
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}

	~Person() {
		delete[]name;
		cout << "called Person Destructor!" << endl;
	}
};

int main(void) {
	Person parr[3];
	// Person* ptrParr[3];
	char namestr[100];
	char* strptr;
	int age;
	int len;

	for (int i = 0; i < 3; i++) {
		cout << "이름: ";
		
		cin >> namestr;
		
		cout << "나이: ";
		
		cin >> age;

		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);

		parr[i].Set_Person_Info(strptr, age);

		// ptrParr[i] = new Person(namestr, age);
	}

	for (int i = 0; i < 3; i++) {
		parr[i].Show_Person_Info();
	}

	/*
	for (int i = 0; i < 3; i++) {
		ptrParr[i]->Show_Person_Info();
	}

	for (int i = 0; i < 3; i++) {
		delete ptrParr[i];
	}
	*/

	return 0;
}