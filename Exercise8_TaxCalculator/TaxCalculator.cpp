#include "TaxCalculator.h"
#include <stdexcept>

int TaxCalculator::inWhichThreshold(double payoff)
{
    if ((payoff >= 0) && (payoff < 10000))
    {
        return 1;
    }
    else if ((payoff >= 10000) && (payoff < 30000))
    {
        return 2;
    }
    else if ((payoff >= 30000) && (payoff < 120000))
    {
        return 3;
    }
    else if (payoff >= 120000)
    {
        return 4;
    }
    else
    {
        throw std::invalid_argument("The amount of money for tax calculation cannot be less than 0");
    }

}

int TaxCalculator::inFirstThreshold(double payoff)
{
    return 0;
}

double TaxCalculator::inSecondThreshold(double payoff)
{
    return ((payoff - 10000) * 0.1);
}

double TaxCalculator::inThirdThreshold(double payoff)
{
    return (20000 * 0.1 + (payoff - 30000) * 0.25);
}

double TaxCalculator::inFourthThreshold(double payoff)
{
    return (20000 * 0.1 + 90000 * 0.25 + (payoff - 120000) * 0.4);
}

double TaxCalculator::countTax(double payoff)
{
    if (1 == inWhichThreshold(payoff))
    {
        return inFirstThreshold(payoff);
    }
    else if (2 == inWhichThreshold(payoff))
    {
        return inSecondThreshold(payoff);
    }
    else if (3 == inWhichThreshold(payoff))
    {
        return inThirdThreshold(payoff);
    }
    else
    {
        return inFourthThreshold(payoff);
    }
}
