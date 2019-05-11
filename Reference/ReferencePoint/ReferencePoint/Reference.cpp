#include <iostream>

using std::cin;
using std::cout;
using std::endl;

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* pptr = new Point;

	pptr->xpos = p1.xpos + p2.xpos;
	pptr->ypos = p1.ypos + p2.ypos;

	return *pptr;
}

int main(void)
{
	Point* p1 = new Point;
	Point* p2 = new Point;
	Point* result = new Point;

	p1->xpos = 30;
	p1->ypos = 40;
	p2->xpos = 10;
	p2->ypos = 20;

	*result = PntAdder(*p1, *p2);

	cout << "[" << result->xpos << ", " << result->ypos << "]" << endl;

	delete p1;
	delete p2;
	delete result;

	return 0;
}