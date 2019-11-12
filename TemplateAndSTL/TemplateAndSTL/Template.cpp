#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template<class T> class MyStack {
private:
	int tos;
	T data[100];

public:
	MyStack();
	void push(T element);
	T pop();
};

template<class T> MyStack<T>::MyStack() {
	tos = -1;
}

template<class T> void MyStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full";

		return;
	}

	tos++;
	data[tos] = element;
}

template<class T> T MyStack<T>::pop() {
	T returnData;

	if (tos == -1) {
		cout << "stack empty";

		return 0;
	}

	returnData = data[tos--];

	return returnData;
}

class Point {
private:
	int x, y;

public:
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }
	void show() { cout << '(' << x << ',' << y << ')' << endl; }
};

int main(void) {
	MyStack<int*> ipStack; // int* 만 저장하는 스택
	int* p = new int[3];

	for (int i = 0; i < 3; i++) { // 0 10 20으로 초기화
		p[i] = i * 10;
	}

	ipStack.push(p); // 포인터 푸시
	
	int* q = ipStack.pop(); // 포인터 팝

	for (int i = 0; i < 3; i++) {
		cout << q[i] << ' ';
	}

	cout << endl;

	delete[] p;

	MyStack<Point> pointStack;
	Point a(2, 3), b;

	pointStack.push(a);
	b = pointStack.pop();
	b.show();

	MyStack<Point*> pStack;
	pStack.push(new Point(10, 20));
	Point* pPoint = pStack.pop();
	pPoint->show();

	MyStack<string> stringStack;
	string s = "C++";
	stringStack.push(s);
	stringStack.push("java");

	cout << stringStack.pop() << ' ';
	cout << stringStack.pop() << endl;

	return 0;
}