#include <iostream>

using std::cout;
using std::endl;

namespace CAR_CONST // enum 네임공간
{
	enum
	{
		ID_LEN			 = 20, // ID길이
		MAX_SPD		 = 200, // 최대 Speed
		FUEL_STEP	 = 2, // 연료깎이는 값
		ACC_STEP	 = 10, // Speed 증가값
		BRK_STEP	 = 10 // Speed 감소값
	};
}

typedef struct Car
{
	char userID[CAR_CONST::ID_LEN]; // UserID
	int fuelGauge; // 연료량
	int curSpeed; // 현재속도

	/*구조체 안에 함수*/
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::ShowCarState() // 계기판
{
	cout << "소유자 ID : " << userID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel() // 악셀
{
	if (fuelGauge <= 0) // 연료없으면 
	{
		return; // 종료
	}
	else
	{
		fuelGauge -= CAR_CONST::FUEL_STEP; // 악셀밟으면 깎임
	}

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) // 최대속도 초과시
	{
		curSpeed = CAR_CONST::MAX_SPD; // 200넣고
		return; // 종료
	}

	curSpeed += CAR_CONST::ACC_STEP; // 현재속도 증가
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP) // 현재속도가 브레이크값 보다 낮으면
	{
		curSpeed = 0; // 0넣고
		return; // 종료
	}

	curSpeed -= CAR_CONST::BRK_STEP; // 현재속도 깎임
}

int main(void)
{
	Car run99 = { "run99", 100, 0 };
	
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}