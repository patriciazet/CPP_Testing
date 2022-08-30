#include "UnitConverter.h"

double UnitConverter::feetToMeter(double feet)
{
	return feet / feetToMeterFactor;
}
double UnitConverter::meterToFeet(double meter)
{
	return meter * feetToMeterFactor;
}
double UnitConverter::celsiusToFahrenheit(double celsius)
{
	return (celsius * 9 / 5) + 32;
}
double UnitConverter::fahrenheitToCelsius(double fahrenheit)
{
	return (fahrenheit - 32) * 5 / 9;
}
