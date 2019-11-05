#ifndef __COLORPOINT__H_
#define __COLORPOINT__H_
#include "Point.h"
#include <string>

using std::string;

class ColorPoint : public Point { // 클래스 선언부
private:
	string color; // 색을 저장할 변수

public:
	ColorPoint(); // default생성자 선언
	ColorPoint(int x, int y); // 매개변수가 2개인 생성자 선언
	void setPoint(int x, int y); // 좌표를 설정하는 함수 선언
	void setColor(string color); // 색을 설정하는 함수 선언
	void show(); // 점의 정보를 출력하는 함수 선언
};
#endif