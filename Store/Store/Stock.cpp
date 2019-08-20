#include "Stock.h"
#include <iostream>

bool Stock::add_item(Item item)
{
	if (stock_.find(item.name()) == stock_.end()) {
		stock_.emplace(item.name(), item);
		return true;
	}
	std::cout << item.name() << " already exists in stock." << std::endl;
	return false;
}

bool Stock::sell_item(Item item, int number)
{
	if (stock_.find(item.name()) != stock_.end()) {
		return stock_.at(item.name()).adjust_quantity(-number);
	}

	std::cout << item.name() << " not found in stock." << std::endl;
	return false;
}

void Stock::print_stock() const
{
	std::cout << "Current stock:" << std::endl;
	for (auto item : stock_) {
		std::cout << "\t" << item.first << ", $" << item.second.price() 
			<< ", " << item.second.quantity() << std::endl;
	}
}

double Stock::total_stock_value() const
{
	double total_value = 0;
	for (auto item : stock_) {
		total_value += item.second.price() * item.second.quantity();
	}
	return total_value;
}
