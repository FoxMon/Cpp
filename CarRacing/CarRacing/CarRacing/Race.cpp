#include <iostream>

using std::cout;
using std::endl;

namespace CAR_CONST {
	enum {
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car {
	char gameID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	void Show_CarState();
	void Accel();
	void Break();
};

void Car::Show_CarState() {
	cout << "소유자ID: " << gameID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl;
}

void Car::Accel() {
	if (fuelGauge <= 0) {
		return;
	} else {
		fuelGauge -= CAR_CONST::FUEL_STEP;
	}

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
		curSpeed = CAR_CONST::MAX_SPD;

		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break() {
	if (curSpeed < CAR_CONST::BRK_STEP) {
		curSpeed = 0;

		return;
	} 

	curSpeed -= CAR_CONST::BRK_STEP;
}

int main(void) {
	Car runFox99 = { "runFox99", 100, 0 };

	runFox99.Accel();
	runFox99.Show_CarState();
	runFox99.Break();
	runFox99.Show_CarState();

	return 0;
}