#include "pch.h"

#include "../Exercise6_FizzBuzz/FizzBuzz.h"

TEST(TestFizzBuzz, fizzBuzz) {
	FizzBuzz fizz;

	EXPECT_EQ(fizz.fizzBuzz(1), "1");
	EXPECT_EQ(fizz.fizzBuzz(2), "2");
	EXPECT_EQ(fizz.fizzBuzz(3), "Fizz");
	EXPECT_EQ(fizz.fizzBuzz(5), "Buzz");
	EXPECT_EQ(fizz.fizzBuzz(15), "FizzBuzz");
}