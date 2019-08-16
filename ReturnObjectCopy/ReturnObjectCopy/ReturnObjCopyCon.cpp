#include <iostream>

using std::cout;
using std::endl;

class SoSimple {
private:
	int num;

public:
	SoSimple(int n) : num(n) {

	}

	SoSimple(const SoSimple& copy) : num(copy.num) {
		cout << "Called SoSimple(const Simple &copy)" << endl;
	}

	SoSimple AddNum(int n) {
		num += n;

		return *this; // 자기 자신 반환
	}

	void ShowData() {
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) {
	cout << "return 이전" << endl;

	return ob;
}

int main(void) {
	SoSimple obj(7);

	SimpleFuncObj(obj).AddNum(30).ShowData();

	obj.ShowData();

	return 0;
}