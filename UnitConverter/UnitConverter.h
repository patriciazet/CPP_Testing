#pragma once
class UnitConverter
{
public:

	double feetToMeter(double feet);
	double meterToFeet(double meter);
	double celsiusToFahrenheit(double celsius);
	double fahrenheitToCelsius(double fahrenheit);

private: 

	const double feetToMeterFactor = 3.281;

};

