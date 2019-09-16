#ifndef __TOWER_H__ // 클래스의 선언부
#define __TOWER_H__
class Tower { // Tower클래스
private:
	int height; // 타워의 높이를 저장하는 변수

public:
	Tower(); // 생성자
	Tower(int h); // 매개변수가 있는 생성자
	int getHeight(); // height변수에 접근할 수 있는 함수
};
#endif