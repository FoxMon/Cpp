#include <iostream>

using std::cout;
using std::endl;

class FruitSeller { // 과일 판매자
private:
	int APPLE_PRICE; // 사과 가격
	int numOfApples; // 사과 개수
	int myMoney; // 판매자 돈

public:
	void InitMembers(int price, int num, int money) { // 초기멤버변수 초기화
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}

	int SaleApples(int money) { // 사과 판매
		int num = money / APPLE_PRICE; // 사과 판매 개수

		numOfApples -= num; // 과일 개수 깎임
		myMoney += money; // 돈 더해짐

		return num;
	}

	void ShowSalesResult() { // 판매자 현황
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer { // 과일 소비자
private:
	int myMoney; // 내 돈
	int numOfApples; // 과일 개수

public:
	void InitMembers(int money) { // 초기 멤버변수 초기화
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller& seller, int money) { // 과일 삼
		numOfApples += seller.SaleApples(money); // 다른 클레스의 함수 호출
		myMoney -= money; // 돈 깎임
	}

	void ShowBuyResult() { // 소비자 현황
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

int main(void) {
	FruitSeller seller; // 판매자
	
	seller.InitMembers(1000, 20, 0);

	FruitBuyer buyer; // 소비자

	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000); // 과일 구매

	cout << "과일 판매자의 현황" << endl;

	seller.ShowSalesResult();

	cout << "과일 구매자의 현황" << endl;

	buyer.ShowBuyResult();

	return 0;
}