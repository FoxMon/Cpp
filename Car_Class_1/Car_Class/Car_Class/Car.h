#ifndef __CAR_H__
#define __CAR_H__

namespace CAR_CONST {
	enum {
		ID_LEN = 20, 
		MAX_SPD = 200, 
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

class Car {
private:
	char gameID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

public:
	void Init_Members(const char* ID, int fuel);
	void Show_CarState();
	void Accel();
	void Break();
};

#endif