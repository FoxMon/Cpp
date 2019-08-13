#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::endl;
using std::cout;

class Person {
private:
	int age;
	char* name;

public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;

		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person(const Person& copy) : age(copy.age) { // Deep Copy Constructor
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}

	~Person() {
		delete[] name;
		
		cout << "Called destructor!!" << endl;
	}

	void Show_Person_Data() {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};

int main(void) {
	Person man1("Kim Jun Ho", 24);
	Person man2 = man1;

	man1.Show_Person_Data();
	man2.Show_Person_Data();

	return 0;

}