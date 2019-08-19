#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using std::endl;
using std::cout;

class Girl; // Girl이라는 클래스의 이름이 있다는 것을 알림, 주석처리해도 컴파일 오류x

class Boy {
private:
	int height;
	friend class Girl; // Girl 클래스에 대한 friend 선언

public:
	Boy(int len) : height(len) {
		// Empty
	}

	void Show_Your_Firend_Info(Girl& frn);
};

class Girl {
private:
	char phNum[20];

public:
	Girl(const char* num) {
		strcpy(phNum, num);
	}

	void Show_Your_Firend_Info(Boy& frn);

	friend class Boy; // Boy 클래스에 대한 friend 선언
};

void Boy::Show_Your_Firend_Info(Girl& frn) {
	cout << "Her phone numberL " << frn.phNum << endl;
}

void Girl::Show_Your_Firend_Info(Boy& frn) {
	cout << "His height: " << frn.height << endl;
}

int main(void) {
	Boy boy(170);
	Girl girl("010-1234-5678");

	boy.Show_Your_Firend_Info(girl);
	girl.Show_Your_Firend_Info(boy);

	return 0;
}