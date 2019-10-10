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

Book& Book::operator += (int op1) {
	this->price = this->price + op1;

	return *this;
}

Book& Book::operator -= (int op1) {
	this->price = this->price - op1;

	return *this;
}

bool Book::operator == (int price) {
	if (this->price == price) {
		return true;
	}

	return false;
}

bool Book::operator == (string title) {
	if (this->title == title) {
		return true;
	}

	return false;
}

bool Book::operator == (Book op1) {
	if (this->title == op1.title && this->price == op1.price && this->pages == op1.pages) {
		return true;
	}

	return false;
}

bool Book::operator ! () {
	if (this->price == 0) {
		return true;
	}

	return false;
}

bool operator < (string op1, Book op2) {
	if (op1 < op2.title) {
		return true;
	}

	return false;
}