#pragma once
#include <map>
#include <string>
#include "Item.h"

class Stock {
public:
	Stock() {};

	bool add_item(Item item);
	bool sell_item(Item item, int number);

	void print_stock() const;
	double total_stock_value() const;

private:
	std::map<std::string, Item> stock_;
};

