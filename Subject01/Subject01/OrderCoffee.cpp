#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	char coffee[100]; // Ŀ�� �̸�
	int num; // �� ��
	int totalMoney = 0; // �� �Ǹ� ����
	int sum = 0; // �ֹ��� ����

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�." << endl;

	while (true) {
		cout << "�ֹ�>>";
		cin >> coffee >> num;

		if (strcmp(coffee, "����������") == 0) {
			sum = 2000 * num;
			totalMoney += sum;

			cout << sum << "���Դϴ�. ���ְ� �弼��." << endl;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			sum = 2300 * num;
			totalMoney += sum;

			cout << sum << "���Դϴ�. ���ְ� �弼��." << endl;
		}
		else if (strcmp(coffee, "īǪġ��") == 0) {
			sum = 2500 * num;
			totalMoney += sum;

			cout << sum << "���Դϴ�. ���ְ� �弼��." << endl;
		}
		else {
			cout << "���� �޴��Դϴ�." << endl;
		}

		if (totalMoney >= 20000) {
			cout << "���� " << totalMoney << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~~" << endl;

			break;
		}
	}

	return 0;
}