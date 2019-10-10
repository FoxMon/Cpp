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
	friend Book& operator += (Book& op1, int op2);
	friend Book& operator -= (Book& op1, int op2);
	friend bool operator == (Book op1, int price);
	friend bool operator == (Book op1, string title);
	friend bool operator == (Book op1, Book op2);
};
#endif