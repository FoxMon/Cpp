#include <iostream>

using std::cout;
using std::endl;

class SoSimple {
private:
	int num1;
	int num2;

public:
	SoSimple(int n1, int n2) : num1(n1), num2(n2) {
		// Empty
	}

	SoSimple(const SoSimple& copy) : num1(copy. num1), num2(copy.num2) { // const로 막아놓는 것이 좋음. explicit(붙일 경우) 묵시적 변환 발생 x.
		// Empty
	}

	void Show_Simple_Data() {
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void) {
	SoSimple sim1(15, 30);

	cout << "생성 및 초기화 직전" << endl;

	SoSimple sim2 = sim1;

	cout << "생성 및 초기화 직후" << endl;

	sim2.Show_Simple_Data();

	return 0;
}