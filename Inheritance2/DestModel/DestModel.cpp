#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Person {
private:
	char* name;

public:
	Person(const char* myname) {
		name = new char[strlen(myname) + 1];

		strcpy(name, myname);
	}

	~Person() {
		delete[] name;
	}

	void WhatIsYourName() const {
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person {
private:
	char* major;

public:
	UnivStudent(const char* myname, const char* mymajor)
		: Person(myname) {
		major = new char[strlen(mymajor) + 1];

		strcpy(major, mymajor);
	}

	~UnivStudent() {
		delete[] major;
	}

	void WhoAreYou() const {
		WhatIsYourName();

		cout << "My major is " << major << endl << endl;
	}
};

int main(void) {
	UnivStudent student1("Kim", "Computer");
	
	student1.WhoAreYou();

	UnivStudent student2("Yun", "Software");

	student2.WhoAreYou();

	return 0;
}