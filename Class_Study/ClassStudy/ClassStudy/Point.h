#ifndef __POINT_H_
#define __POINT_H_

class Point {
private: // ���Ƿ� �ʱ�ȭ �Ұ���
	int x;
	int y;

public:
	bool Init_Members(int xpos, int ypos);
	int Get_X() const;
	int Get_Y() const;
	bool Set_X(int xpos);
	bool Set_Y(int ypos);
};

#endif