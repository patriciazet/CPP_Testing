#include "pch.h"

#include "../Exercise5/UnitConverter.h"

TEST(UnitConverterTemperature, CelsiusToFahrenheit_ConvertZero) 
{
	UnitConverter converter;

	EXPECT_DOUBLE_EQ(converter.celsiusToFahrenheit(0), 32);
}

TEST(UnitConverterTemperature, CelsiusToFahrenheit_ConvertPositiveValue) 
{
	UnitConverter converter;

	EXPECT_DOUBLE_EQ(converter.celsiusToFahrenheit(40), 104);
}

TEST(UnitConverterTemperature, CelsiusToFahrenheit_ConvertNegativeValue)
{
	UnitConverter converter;

	EXPECT_DOUBLE_EQ(converter.celsiusToFahrenheit(-15), 5);
}

TEST(UnitConverterTemperature, CelsiusToFahrenheit_ConvertFractionValue)
{
	UnitConverter converter;

	EXPECT_DOUBLE_EQ(converter.celsiusToFahrenheit(37.6), 99.68);
	EXPECT_DOUBLE_EQ(converter.celsiusToFahrenheit(-10.5), 13.1);
}