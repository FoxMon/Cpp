#ifndef __BOOK__H_
#define __BOOK__H_
#include <string>

using std::string;

class Book {
private:
	string title;
	int price, pages;

public:
	Book(string title = "", int price = 0, int pages = 0);
	void show();
	string getTitle();
	Book& operator += (int op1);
	Book& operator -= (int op1);
	bool operator == (int price);
	bool operator == (string title);
	bool operator == (Book op1);
	bool operator ! ();
	friend bool operator < (string op1, Book op2);
};
#endif