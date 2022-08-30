#include "Product.h"

Product::Product()
{
}

Product::Product(std::string name, int price, int barcodeValue)
{
	if (price <= 0)
	{
		throw std::invalid_argument("Price has to be greater than 0!");
	}
	else if (barcodeValue <= 0)
	{
		throw std::invalid_argument("Barcode has to be greater than 0!");

	}
	_name = name;
	_price = price;
	_barcodeValue = barcodeValue;
}
