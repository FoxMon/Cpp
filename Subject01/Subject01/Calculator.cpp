#include <iostream>
#include <cstring>
#include <cstdlib>

using std::endl;
using std::cout;
using std::cin;

int Add(int x, int y) { // ����
	return x + y;
}

int Subtract(int x, int y) { // ����
	return x - y;
}

int Multiple(int x, int y) { // ����
	return x * y;
}

int Divide(int x, int y) { // ������(��)
	return x / y;
}

int Reminder(int x, int y) { // ������(������)
	return x % y;
}

int main(void) {
	char operand[50];
	char* operatorChar = NULL;
	int Loperand;
	int Roperand;

	while (true) {
		cout << "? ";
		cin.getline(operand, 50, ' \n');

		Loperand = atoi(strtok(operand, " ")); // ���� �ǿ����� ���ϱ�
		operatorChar = strtok(NULL, " "); // ������ ���ϱ�
		Roperand = atoi(strtok(NULL, " ")); // ������ �ǿ����� ���ϱ�

		if (*operatorChar == '+') {
			cout << Loperand << " " << operatorChar << " " << Roperand << " = " << Add(Loperand, Roperand) <<endl;
		} 
		else if (*operatorChar == '-') {
			cout << Loperand << " " << operatorChar << " " << Roperand << " = " << Subtract(Loperand, Roperand) << endl;
		}
		else if (*operatorChar == '*') {
			cout << Loperand << " " << operatorChar << " " << Roperand << " = " << Multiple(Loperand, Roperand) << endl;
		}
		else if (*operatorChar == '/') {
			cout << Loperand << " " << operatorChar << " " << Roperand << " = " << Divide(Loperand, Roperand) << endl;
		}
		else if (*operatorChar == '%') {
			cout << Loperand << " " << operatorChar << " " << Roperand << " = " << Reminder(Loperand, Roperand) <<endl;
		}
		else {
			cout << "�Է½��� �ùٸ��� �ʽ��ϴ�." << endl;
		}
	}

	return 0;
}