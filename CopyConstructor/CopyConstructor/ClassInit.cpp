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

	SoSimple(const SoSimple& copy) : num1(copy. num1), num2(copy.num2) { // const�� ���Ƴ��� ���� ����. explicit(���� ���) ������ ��ȯ �߻� x.
		// Empty
	}

	void Show_Simple_Data() {
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void) {
	SoSimple sim1(15, 30);

	cout << "���� �� �ʱ�ȭ ����" << endl;

	SoSimple sim2 = sim1;

	cout << "���� �� �ʱ�ȭ ����" << endl;

	sim2.Show_Simple_Data();

	return 0;
}