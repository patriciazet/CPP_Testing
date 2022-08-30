#include <iostream>
#include "BarcodeScanner.h"
#include "Product.h"

int main()
{
    try
    {
        BarcodeScanner bars;
        bars.addProduct(Product("yoghurt", 5, 456789));
        bars.addProduct(Product("bakeroll", 2,456783));
        bars.addProduct(Product("milk", 1, 456321));
        std::cout << bars.getNameAndPrice(456789) << std::endl;
        std::cout << bars.getNameAndPrice(456783) << std::endl;
        std::cout << bars.getNameAndPrice(456321) << std::endl;
    }
    catch (const std::invalid_argument& error)
    {
        std::cout << error.what() << std::endl;
    }
}
