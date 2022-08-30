#include "TaxCalculator.h"
#include <iostream>

int main()
{
    TaxCalculator taxCalculator;
    try
    {
        std::cout << taxCalculator.countTax(34567) << std::endl;
        std::cout << taxCalculator.countTax(-2000) << std::endl;
        std::cout << taxCalculator.countTax(0) << std::endl;
    }
    catch (const std::invalid_argument& error)
    {
        std::cout << error.what() << std::endl;
    }

}