#include <iostream>
#include <cstring>
#include <cstdlib>

using std::endl;
using std::cout;
using std::cin;

int Add(int x, int y) { // µ¡¼À
	return x + y;
}

int Subtract(int x, int y) { // »¬¼À
	return x - y;
}

int Multiple(int x, int y) { // °ö¼À
	return x * y;
}

int Divide(int x, int y) { // ³ª´°¼À(¸ò)
	return x / y;
}

int Reminder(int x, int y) { // ³ª´°¼À(³ª¸ÓÁö)
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

		Loperand = atoi(strtok(operand, " ")); // ¿ŞÂÊ ÇÇ¿¬»êÀÚ ±¸ÇÏ±â
		operatorChar = strtok(NULL, " "); // ¿¬»êÀÚ ±¸ÇÏ±â
		Roperand = atoi(strtok(NULL, " ")); // ¿À¸¥ÂÊ ÇÇ¿¬»êÀÚ ±¸ÇÏ±â

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
			cout << "ÀÔ·Â½ÄÀÌ ¿Ã¹Ù¸£Áö ¾Ê½À´Ï´Ù." << endl;
		}
	}

	return 0;
}