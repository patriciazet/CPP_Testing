#pragma once
#include <string>

struct Product
{
	std::string _name = {};
	int _price = 0;
	int _barcodeValue = 0;
	Product();
	Product(std::string name, int price, int barcodeValue);
};