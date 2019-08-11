#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class SoSimple {
private:
	int num;

public:
	SoSimple(int n)
		:num(n) {
		cout << "num= " << num << ", ";
		cout << "address= " << this << endl;
	}

	void Show_Simple_Data() {
		cout << num << endl;
	}

	SoSimple* Get_This_Pointer() {
		return this;
	}
};

int main(void) {
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.Get_This_Pointer();

	cout << ptr1 << ", ";

	ptr1->Show_Simple_Data();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.Get_This_Pointer();

	cout << ptr2 << ", ";

	ptr2->Show_Simple_Data();

	return 0;
}