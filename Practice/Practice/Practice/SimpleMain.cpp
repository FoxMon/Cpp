#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;
using std::istream;

class Phone {
private:
	string name;
	string telnum;
	string address;

public:
	Phone(string name = "", string telnum = "", string address = "") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}

	friend ostream& operator << (ostream& outs, Phone op);
	friend istream& operator >> (istream& ins, Phone& op);
};

ostream& operator << (ostream& outs, Phone op) {
	cout << "�̸� : ";
	cout << op.name << endl;
	cout << "��ȭ��ȣ : ";
	cout << op.telnum << endl;
	cout << "�ּ� : ";
	cout << op.address << endl;

	return outs;
}

istream& operator >> (istream& ins, Phone& op) {
	string name, telnum, address;

	cout << "�̸� : ";
	getline(ins, op.name);
	cout << "��ȭ��ȣ : ";
	getline(ins, op.telnum);
	cout << "�ּ� : ";
	getline(ins, op.address);

	return ins;
}

int main(void) {
	Phone girl, boy;

	cin >> girl >> boy;
	cout << girl << endl << boy << endl;
}