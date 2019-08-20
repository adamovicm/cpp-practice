#include <iostream>
#include "Item.h"
#include "Stock.h"

int main() 
{
	Stock stock;
	Item temp_item("bread", 0.8, 30);
	stock.add_item(temp_item);

	temp_item.name("milk");
	temp_item.price(1.2);
	temp_item.quantity(26);
	stock.add_item(temp_item);

	temp_item.name("pizza");
	temp_item.price(3.5);
	temp_item.quantity(12);
	stock.add_item(temp_item);

	temp_item.name("chocolate");
	temp_item.price(1.15);
	temp_item.quantity(20);
	stock.add_item(temp_item);

	stock.print_stock();


	return 0;
}