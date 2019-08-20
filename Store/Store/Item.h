#pragma once

#include <string>
#include <map>

class Item {
public:
	Item(std::string item_name, double item_price, int item_quantity = 0) : 
		name_(item_name), price_(item_price), quantity_(item_quantity) {};
	Item(const Item& new_item);

	std::string name() const;
	const double price() const;
	const int quantity() const;

	bool name(std::string new_name);
	bool price(double new_price);
	bool quantity(int new_quantity);
	bool adjust_quantity(int new_quantity);

	void print_item() const;
	double total_item_stock_value() const;

private:
	std::string name_;
	double price_;
	int quantity_;
};

