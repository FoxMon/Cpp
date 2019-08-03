#include <iostream>

using std::cout;
using std::endl;

class FruitSeller {
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	FruitSeller(int price, int num, int money) { // 생성자
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money) {
		int num = money / APPLE_PRICE;

		numOfApples -= num;
		myMoney += money;

		return num;
	}

	void Show_Sales_Result() const {
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl;
	}
};

class FruitBuyer {
private:
	int myMoney;
	int numOfApples;

public:
	FruitBuyer(int money) {
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller &seller, int money) {
		numOfApples = seller.SaleApples(money);
		myMoney -= money;
	}

	void Show_Buy_Result() const {
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl;
	}
};

int main(void) {
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);

	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;

	seller.Show_Sales_Result();

	cout << "과일 구매자의 현황" << endl;

	buyer.Show_Buy_Result();

	return 0;
}