#include <iostream>

using std::cout;
using std::endl;

namespace CAR_CONST // enum ���Ӱ���
{
	enum
	{
		ID_LEN			 = 20, // ID����
		MAX_SPD		 = 200, // �ִ� Speed
		FUEL_STEP	 = 2, // ������̴� ��
		ACC_STEP	 = 10, // Speed ������
		BRK_STEP	 = 10 // Speed ���Ұ�
	};
}

typedef struct Car
{
	char userID[CAR_CONST::ID_LEN]; // UserID
	int fuelGauge; // ���ᷮ
	int curSpeed; // ����ӵ�

	/*����ü �ȿ� �Լ�*/
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::ShowCarState() // �����
{
	cout << "������ ID : " << userID << endl;
	cout << "���ᷮ : " << fuelGauge << "%" << endl;
	cout << "����ӵ� : " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel() // �Ǽ�
{
	if (fuelGauge <= 0) // ��������� 
	{
		return; // ����
	}
	else
	{
		fuelGauge -= CAR_CONST::FUEL_STEP; // �Ǽ������� ����
	}

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) // �ִ�ӵ� �ʰ���
	{
		curSpeed = CAR_CONST::MAX_SPD; // 200�ְ�
		return; // ����
	}

	curSpeed += CAR_CONST::ACC_STEP; // ����ӵ� ����
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP) // ����ӵ��� �극��ũ�� ���� ������
	{
		curSpeed = 0; // 0�ְ�
		return; // ����
	}

	curSpeed -= CAR_CONST::BRK_STEP; // ����ӵ� ����
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