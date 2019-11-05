#include "Product.h"

Product::Product() { }
Product::Product(int id, int price, string description, string producer)
	: id(id), price(price), description(description), producer(producer) {
	// Empty
}

	int Product::getId() { return id; }
	int Product::getPrice() { return price; }
	string Product::getDescription() { return description; }
	string Product::getProducer() { return producer; }