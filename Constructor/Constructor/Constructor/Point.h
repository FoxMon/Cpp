#ifndef __POINT_H
#define __POINT_H

class Point {
private:
	int x;
	int y;

public:
	Point(const int& xpos, const int& ypos);
	int Get_X() const;
	int Get_Y() const;
	bool Set_X(int xpos);
	bool Set_Y(int ypos);
};

#endif