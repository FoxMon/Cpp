#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	char name[10]; // 이름저장
	char address[50]; // 주소저장
	int age; // 나이저장

	cout << "이름은?";
	cin.getline(name, 10, '\n');

	cout << "주소는?";
	cin.getline(address, 50, '\n');

	cout << "나이는?";
	cin >> age;

	cout << name << ", " << address << ", " << age << "세" << endl;

	return 0;
}