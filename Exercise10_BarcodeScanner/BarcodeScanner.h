#pragma once
#pragma once
#include "Product.h"
#include <vector>
#include <algorithm>

class BarcodeScanner
{
private:
	std::vector<Product> _products = {};
public:
	int getSizeOfVector() const; 
	void addProduct(const Product& product);
	std::string getNameAndPrice(int barcode) const;
};