#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(void) {
	auto love = [](string a, string b) {
		cout << a << "보다 " << b << "가 좋아" << endl;
	};

	love("돈", "너");

	double pi = 3.14;
	
	auto calc = [pi](int r)->double {
		return pi * r* r;
	};

	cout << "면적은 " << calc(3);
}