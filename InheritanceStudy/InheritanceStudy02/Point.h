#ifndef __POINT__H_
#define __POINT__H_
class Point { // 클래스 선언부
private:
	int x, y; // x좌표와 y좌표를 저장할 변수

public:
	Point(int x, int y); // 매개변수 2개를 가진 생성자 선언
	int getX(); // x좌표를 반환하는 함수 선언
	int getY(); // y좌표를 반환하는 함수 선언
	
protected:
	void move(int x, int y); // x좌표와 y좌표 위치를 바꾸는 함수 선언
};
#endif