#include "Book.h"
#include <iostream>

using std::cout;
using std::endl;

Book::Book(string title, int price, int pages)
	: title(title), price(price), pages(pages) {
	// Empty
}

void Book::show() {
	cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
}

string Book::getTitle() {
	return title;
}

Book& operator += (Book& op1, int op2) {
	op1.price += op2;

	return op1;
}

Book& operator -= (Book& op1, int op2) {
	op1.price -= op2;
	
	return op1;
}

bool operator == (Book op1, int price) {
	if (op1.price == price) {
		return true;
	}

	return false;
}

bool operator == (Book op1, string title) {
	if (title == title) {
		return true;
	}

	return false;
}

bool operator == (Book op1, Book op2) {
	if (op1.title == op2.title && op1.price == op2.price && op1.pages == op2.pages) {
		return true;
	}

	return false;
}