#include <iostream>

using std::endl;
using std::cout;

class Color {
private:
	int red;
	int green;
	int blue;

public:
	Color(int r = 0, int g = 0, int b = 0)
		: red(r), green(g), blue(b) {
		// Empty
	}

	Color operator + (Color op1) {
		Color temp;

		temp.red = this->red + op1.red;
		temp.green = this->green + op1.green;
		temp.blue = this->blue + op1.blue;

		return temp;
	}

	bool operator == (Color op1) {
		if (this->red == op1.red && this->green == op1.green && this->blue == op1.blue) {
			return true;
		}

		return false;
	}

	void show() {
		cout << this->red << " " << this->green << " " << this->blue << endl;
	}
};

int main(void) {
	Color red(255, 0, 0), blue(0, 0, 255), c;

	c = red + blue;
	c.show();

	Color f(255, 0, 255);

	if (c == f)
		cout << "보라색 맞음";
	else
		cout << "보래삭 아님";

	return 0;
}