#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	char coffee[100]; // 커피 이름
	int num; // 잔 수
	int totalMoney = 0; // 총 판매 가격
	int sum = 0; // 주문한 가격

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;

	while (true) {
		cout << "주문>>";
		cin >> coffee >> num;

		if (strcmp(coffee, "에스프레소") == 0) {
			sum = 2000 * num;
			totalMoney += sum;

			cout << sum << "원입니다. 맛있게 드세요." << endl;
		}
		else if (strcmp(coffee, "아메리카노") == 0) {
			sum = 2300 * num;
			totalMoney += sum;

			cout << sum << "원입니다. 맛있게 드세요." << endl;
		}
		else if (strcmp(coffee, "카푸치노") == 0) {
			sum = 2500 * num;
			totalMoney += sum;

			cout << sum << "원입니다. 맛있게 드세요." << endl;
		}
		else {
			cout << "없는 메뉴입니다." << endl;
		}

		if (totalMoney >= 20000) {
			cout << "오늘 " << totalMoney << "원을 판매하여 카페를 닫습니다. 내일 봐요~~~" << endl;

			break;
		}
	}

	return 0;
}