#include <iostream>

using std::cout;
using std::endl;

class TwoNumber {
private:
	int num1;
	int num2;

public:
	TwoNumber(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;
	}

	/* 이니셜라이저에서는 this 포인터 사용 불가능
	TwoNumber(int num1, int num2)
		:num1(num1), num2(num2) {
		// Empty
	}
	*/

	void Show_TwoNumber() {
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};

int main(void) {
	TwoNumber two(2, 4);
	
	two.Show_TwoNumber();

	return 0;
}