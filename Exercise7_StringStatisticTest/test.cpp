#include "pch.h"

#include "../Exercise7_StringStatistic/StringStatistics.h"

class StringStatisticsTestEmpty : public ::testing::Test
{
protected:
	StringStatisticsTestEmpty()
		: stringStatistics("")
	{
	}

	//StringStatisticsTestEmpty(std::string str)
	//	: stringStatistics(str)
	//{
	//}

	StringStatisticsWithUtils stringStatistics;
};

TEST_F(StringStatisticsTestEmpty, getLetterCount_Empty_ReturnsZero)
{
	EXPECT_EQ(stringStatistics.getLetterCharCount(), 0);
}

TEST_F(StringStatisticsTestEmpty, getDigitCount_Empty_ReturnsZero)
{
	EXPECT_EQ(stringStatistics.getDigitCharCount(), 0);
}

TEST_F(StringStatisticsTestEmpty, getSpecialCount_Empty_ReturnsZero)
{
	EXPECT_EQ(stringStatistics.getSpecialCharCount(), 0);
}

class StringStatisticsTest : public StringStatisticsTestEmpty
{
protected:
	//StringStatisticsTest()
	//	: StringStatisticsTestEmpty("AAaa123 &%$aa1")
	//{
	//}

	void SetUp() override
	{
		stringStatistics = StringStatisticsWithUtils("AAaa123 &%$aa1");
	}
};

TEST_F(StringStatisticsTest, getLetterCount_Empty_Counted)
{
	EXPECT_EQ(stringStatistics.getLetterCharCount(), 6);
}

TEST_F(StringStatisticsTest, getDigitCount_Empty_Counted)
{
	EXPECT_EQ(stringStatistics.getDigitCharCount(), 4);
}

TEST_F(StringStatisticsTest, getSpecialCount_Empty_Counted)
{
	EXPECT_EQ(stringStatistics.getSpecialCharCount(), 4);
}