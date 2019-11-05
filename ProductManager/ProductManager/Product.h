#ifndef __PRODUCT__H_
#define __PRODUCT__H_
#include <string>

using std::string;

class Product {
private:
	int id;
	int price;
	string description;
	string producer;

public:
	Product();
	Product(int id, int price, string description, string producer);
	int getId();
	int getPrice();
	string getDescription();
	string getProducer();
};
#endif