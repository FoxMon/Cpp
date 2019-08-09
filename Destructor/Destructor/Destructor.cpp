#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Person {
private:
	char* name;
	int age;

public:
	Person(const char myname[], int myage) {
		int len = strlen(myname) + 1;

		name = new char[len];

		strcpy(name, myname);
		age = myage;
	}

	void Show_Person_Info() const {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}

	~Person() {
		delete[]name;

		cout << "called destructor!" << endl;
	}
};

int main(void) {
	Person man1("Rok Lee", 29);
	Person man2("Naruto", 41);

	man1.Show_Person_Info();
	man2.Show_Person_Info();

	return 0;
}