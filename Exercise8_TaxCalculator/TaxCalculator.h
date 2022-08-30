#pragma once

class TaxCalculator
{
private:
	int inWhichThreshold(double payoff);
	int inFirstThreshold(double payoff);
	double inSecondThreshold(double payoff);
	double inThirdThreshold(double payoff);
	double inFourthThreshold(double payoff);
public:
	double countTax(double payoff);
};

