#include <iostream>

using std::endl;
using std::cout;

class Base {
private:
	int num1;

protected:
	int num2;

public:
	int num3;

	Base() : num1(1), num2(2), num3(3) {
		// Empty!
	}
};

class Derived : protected Base {
	// Empty!
};

int main(void) {
	Derived drv;

	// cout << drv.num3 << endl;
	// 접근 불가능의 형태

	return 0;
}