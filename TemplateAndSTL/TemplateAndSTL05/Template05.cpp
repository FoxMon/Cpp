#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::endl;
using std::cout;
using std::cin;


int main(void) {
	vector<int> v;

	cout << "5���� ������ �Է��ϼ���>> ";
	
	for (int i = 0; i < 5; i++) {
		int n;

		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());

	vector<int>::iterator it;

	for (it = v.begin(); it < v.end(); it++) {
		cout << *it << ' ';
	}

	cout << endl;

	return 0;
}