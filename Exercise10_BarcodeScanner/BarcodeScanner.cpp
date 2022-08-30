#include <iostream>
#include "BarcodeScanner.h"

int BarcodeScanner::getSizeOfVector() const
{
	return _products.size();
}

void BarcodeScanner::addProduct(const Product& product)
{
	if (!(_products.empty()))
	{
		for (auto it = _products.begin(); it < _products.end(); ++it)
		{
			if (product._barcodeValue == (*it)._barcodeValue)
			{
				throw std::invalid_argument("Barcode already exists. Cannot add the product");
			}
		}
	}
	_products.push_back(product);
}

std::string BarcodeScanner::getNameAndPrice(int barcode) const
{
	std::string nameAndPrice = {};
	int barcodeInVector = 0;
	for (auto it = _products.begin(); it < _products.end(); ++it)
	{
		if (barcode == (*it)._barcodeValue)
		{
			nameAndPrice += ((*it)._name + ", " + std::to_string((*it)._price));
			barcodeInVector = barcode;
			break;
		}
	}
	if (barcodeInVector == 0)
	{
		throw std::invalid_argument("Barcode not found");
	}
		return nameAndPrice;
}


