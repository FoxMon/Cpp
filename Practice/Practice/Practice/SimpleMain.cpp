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
	cout << "이름 : ";
	cout << op.name << endl;
	cout << "전화번호 : ";
	cout << op.telnum << endl;
	cout << "주소 : ";
	cout << op.address << endl;

	return outs;
}

istream& operator >> (istream& ins, Phone& op) {
	string name, telnum, address;

	cout << "이름 : ";
	getline(ins, op.name);
	cout << "전화번호 : ";
	getline(ins, op.telnum);
	cout << "주소 : ";
	getline(ins, op.address);

	return ins;
}

int main(void) {
	Phone girl, boy;

	cin >> girl >> boy;
	cout << girl << endl << boy << endl;
}