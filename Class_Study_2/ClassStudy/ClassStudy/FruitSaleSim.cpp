#include <iostream>

using std::cout;
using std::endl;

class FruitSeller { // ���� �Ǹ���
private:
	int APPLE_PRICE; // ��� ����
	int numOfApples; // ��� ����
	int myMoney; // �Ǹ��� ��

public:
	void InitMembers(int price, int num, int money) { // �ʱ������� �ʱ�ȭ
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money) { // ��� �Ǹ�
		int num = money / APPLE_PRICE; // ��� �Ǹ� ����

		numOfApples -= num; // ���� ���� ����
		myMoney += money; // �� ������

		return num;
	}

	void ShowSalesResult() { // �Ǹ��� ��Ȳ
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer { // ���� �Һ���
private:
	int myMoney; // �� ��
	int numOfApples; // ���� ����

public:
	void InitMembers(int money) { // �ʱ� ������� �ʱ�ȭ
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller& seller, int money) { // ���� ��
		numOfApples += seller.SaleApples(money); // �ٸ� Ŭ������ �Լ� ȣ��
		myMoney -= money; // �� ����
	}

	void ShowBuyResult() { // �Һ��� ��Ȳ
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};

int main(void) {
	FruitSeller seller; // �Ǹ���
	
	seller.InitMembers(1000, 20, 0);

	FruitBuyer buyer; // �Һ���

	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000); // ���� ����

	cout << "���� �Ǹ����� ��Ȳ" << endl;

	seller.ShowSalesResult();

	cout << "���� �������� ��Ȳ" << endl;

	buyer.ShowBuyResult();

	return 0;
}