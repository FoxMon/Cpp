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

	auto ret = square(3); // square함수의 return type -> int이므로, auto역시 int로 결정

	cout << *p << " " << ret << endl;

	vector<int> v = { 1,2,3,4,5 };
	vector<int>::iterator it;

	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	for (auto it = v.begin(); it != v.end(); it++) { // template에 auto를 사용 -> 선언 간소화
		cout << *it << " ";
	}

	return 0;
}