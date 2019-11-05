#ifndef __BOOK__H_
#define __BOOK__H_
#include "Product.h"
class Book : public Product {
private:
	string isbn;
	string author;
	string name;
};
#endif