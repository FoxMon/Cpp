#include "Car.h"

int main(void) {
	Car runFox99;

	runFox99.Init_Members("runFox99", 100);
	runFox99.Accel();
	runFox99.Accel();
	runFox99.Accel();
	runFox99.Show_CarState();
	runFox99.Break();
	runFox99.Show_CarState();

	return 0;
}