#include "WordGame.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	int people; // �����ϴ� �ο��� ������ ����

	cout << "���� �ձ� ������ �����մϴ�." << endl;
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�? >> "; // ������ �ο��� ����
	cin >> people; // �ο��� ����

	WordGame app(people); // WordGame��ü ����
	
	app.game(); // ���� ����!!!

	return 0;
}