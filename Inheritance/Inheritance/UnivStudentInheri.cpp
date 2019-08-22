#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Person {
private:
	int age; // 나이
	char name[50]; // 이름

public:
	Person(int myage, const char* myname) : age(myage) {
		strcpy(name, myname);
	}

	void WhatIsYourName() const {
		cout << "My name is " << name << endl;
	}

	void HowOldAreYou() const {
		cout << "I'm " << age << " years old." << endl;
	}
};

class UnivStudent : public Person {
private:
	char major[50]; // 전공

public:
	UnivStudent(const char* myname, int myage, const char* mymajor) 
		: Person(myage, myname) {
		strcpy(major, mymajor);
	}

	void WhoAreYou() const {
		WhatIsYourName();
		HowOldAreYou();

		cout << "My major is " << major << endl << endl;
	}
};

int main(void) {
	UnivStudent student1("Kim", 24, "Computer eng.");
	student1.WhoAreYou();

	UnivStudent student2("Yun", 23, "Software eng.");
	student2.WhoAreYou();
}