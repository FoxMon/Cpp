#include <iostream>

using std::cout;
using std::endl;

class AAA {
public:
	AAA() {
		cout << "empty object" << endl;
	}

	void Show_Your_Name() {
		cout << "I'm class AAA" << endl;
	}
};

class BBB {
private:
	AAA& ref;
	const int& num;

public:
	BBB(AAA& r, const int& n)
		:ref(r), num(n) {
		// empty
	}

	void Show_Your_Name() {
		ref.Show_Your_Name();

		cout << "and" << endl;
		cout << "I ref num " << num << endl;
	}
};

int main(void) {
	AAA obj1;
	BBB obj2(obj1, 20);

	obj2.Show_Your_Name();

	return 0;
}