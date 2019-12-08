#include <iostream>
#include <vector>

using std::vector;
using std::iterator;
using std::endl;
using std::cout;

int square(int x) {
	return x * x;
}

int main(void) {
	auto c = 'a';
	auto pi = 3.14;
	auto ten = 10;
	auto* p = &ten;

	cout << c << " " << pi << " " << ten << " " << *p << endl;

	auto ret = square(3); // square�Լ��� return type -> int�̹Ƿ�, auto���� int�� ����

	cout << *p << " " << ret << endl;

	vector<int> v = { 1,2,3,4,5 };
	vector<int>::iterator it;

	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	for (auto it = v.begin(); it != v.end(); it++) { // template�� auto�� ��� -> ���� ����ȭ
		cout << *it << " ";
	}

	return 0;
}