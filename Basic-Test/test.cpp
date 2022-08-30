#include "pch.h"
 #include "../Basic/Calculator.h "

TEST(CalculatorTest/*TestCaseName*/, Sum2Plus2equals4/*TestName*/)
{
	Calculator calc;
	EXPECT_EQ(calc.sum(2, 2), 4);
}


/*TEST(SumTest, Test2Plus2Equals4)
{
	Calculator calc; // tu w tescie musze utworzyc obiekt kalkulatora // GIVEN  kontekst wywolania

	int result = calc.sum(2, 2); // WHEN

	EXPECT_EQ(calc.sum(2, 2), 4); // bo 2+2 = 4 // THEN assercja - obserwowane konsekwencje
}
*/

/*TEST(TestCase1, Test2) // makro definiuj¹ce test o nazwie Test1
{
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(TestCase1, Test3)
{
	ASSERT_EQ(1, 2); // sprawdzamy, czy 1 jest rowne 2, oczywiscie jest to blad
	EXPECT_TRUE(true);
}

TEST(TestCase2, Test1)
{
	ASSERT_TRUE(false);
	EXPECT_EQ(1, 2);
}

TEST(TestCase2, Test7)
{
	EXPECT_EQ(1, 2);
	EXPECT_TRUE(false);
}*/