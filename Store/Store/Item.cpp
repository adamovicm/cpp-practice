#include "Item.h"
#include <iostream>

Item::Item(const Item& new_item)
{
	this->name_ = new_item.name();
	this->price_ = new_item.price();
	this->quantity_ = new_item.quantity();
}

std::string Item::name() const
{
	return name_;
}

const double Item::price() const
{
	return price_;
}

const int Item::quantity() const
{
	return quantity_;
}

bool Item::name(std::string new_name)
{
	if (new_name.size() != 0) {
		name_ = new_name;
		return true;
	}
	return false;
}

bool Item::price(double new_price)
{
	if (new_price > 0.0) {
		price_ = new_price;
		return true;
	}
	return false;
}

bool Item::quantity(int new_quantity)
{
	if (new_quantity >= 0) {
		quantity_ = new_quantity;
		return true;
	}
	return false;
}

bool Item::adjust_quantity(int new_quantity)
{
	if (quantity_ + new_quantity >= 0) {
		quantity_ += new_quantity;
		return true;
	}
	return false;
}

void Item::print_item() const 
{
	std::cout << name_ << ", $" << price_;
}

double Item::total_item_stock_value() const
{
	return quantity_ * price_;
}