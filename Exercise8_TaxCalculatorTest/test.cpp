#include "pch.h"
#include "../Exercise8_TaxCalculator/TaxCalculator.h"

class TaxCalculatorTest : public ::testing::Test
{
protected:
	TaxCalculator tax_calculator;
};

TEST_F(TaxCalculatorTest, CountTax_LessThan0Payoffs_Throws_Invalid_Argument_Exception)
{
	EXPECT_THROW(tax_calculator.countTax(-0.345678), std::invalid_argument);
	EXPECT_THROW(tax_calculator.countTax(-4), std::invalid_argument);
	EXPECT_THROW(tax_calculator.countTax(-100), std::invalid_argument);
}

TEST_F(TaxCalculatorTest, CountTax_Random_ReturnsProperAmountOfTax)
{
	EXPECT_EQ(0, tax_calculator.countTax(6000));
	EXPECT_EQ(800, tax_calculator.countTax(18000));
	EXPECT_EQ(79000, tax_calculator.countTax(256250));
}

TEST_F(TaxCalculatorTest, CountTax_LessThan10000Payoffs_ReturnsProperAmountOfTax)
{
	EXPECT_EQ(0, tax_calculator.countTax(0));
	EXPECT_EQ(0, tax_calculator.countTax(5));
	EXPECT_EQ(0, tax_calculator.countTax(9998));
}

TEST_F(TaxCalculatorTest, CountTax_MoreThan10000LessThan30000Payoffs_ReturnsProperAmountOfTax)
{
	EXPECT_DOUBLE_EQ(0, tax_calculator.countTax(10000));
	EXPECT_DOUBLE_EQ(0.1, tax_calculator.countTax(10001));
	EXPECT_DOUBLE_EQ(1999.9, tax_calculator.countTax(29999));
}

TEST_F(TaxCalculatorTest, CountTax_MoreThan30000LessThan120000Payoffs_ReturnsProperAmountOfTax)
{
	EXPECT_DOUBLE_EQ(2000, tax_calculator.countTax(30000));
	EXPECT_DOUBLE_EQ(24499.75, tax_calculator.countTax(119999));
}

TEST_F(TaxCalculatorTest, CountTax_MoreThan120000Payoffs_ReturnsProperAmountOfTax)
{
	EXPECT_DOUBLE_EQ(24500, tax_calculator.countTax(120000));
	EXPECT_DOUBLE_EQ(24500.4, tax_calculator.countTax(120001));

}
