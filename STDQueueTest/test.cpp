#include "pch.h"
#include <queue>

//1.Sprawdzic, czy nowoutworzona kolejka jest pusta
//2.Sprawdzic, czy jak dodamy klika elementow(push) to size sie zmieni na prawidlowa wartosc
//3.Sprawdzic, czy jak wywolamy pop na kolejcez elementami to zmniejszy sie jej rozmiar
//4.Sprawdzic, cy jak za pomoca push wlozymy elementy o zadanych wartosciach to po wywolaniu pop bedzie odpowiednio ustawiony back
//5.S[rawdzic, czy jak wrzucimy 5 elementow i potem 5 razy wywolamy pop to kolejka bedzie pusta


//1
TEST(QueueTest, TestNewQueueIsEmpty) 
{
	std::queue<int> testedQueue;
  
    EXPECT_TRUE(testedQueue.empty()); // sprawdzam, czy kolejka jest pusta
}

//2
TEST(QueueTest, TestAdding3elements)
{
	std::queue<int> testedQueue;
	for (int i = 0; i < 3; ++i)
	{
		testedQueue.push(i);
	}
	EXPECT_EQ(testedQueue.size(), 3);
}

//3
TEST(QueueTest, TestRemovingElelents)
{
	const size_t desiredQueueSize = 3; // wprowadzamy te zmienna, zeby test mozna bylo latwo poprwaic, np zmienic 3 na 10
	std::queue<int> testedQueue;
	for (int i = 0; i < desiredQueueSize; ++i)
	{
		testedQueue.push(i);
	}
	EXPECT_EQ(testedQueue.size(), desiredQueueSize);
	testedQueue.pop();
	EXPECT_EQ(testedQueue.size(), desiredQueueSize - 1);
}

//4
TEST(QueueTest, TestElementOrderUsingPop)
{
	const size_t desiredQueueSize = 10;
	std::queue<int> testedQueue;
	for (int i = 0; i < desiredQueueSize; ++i)
	{
		testedQueue.push(i);
	}

	for (int i = 0; i < desiredQueueSize; ++i)
	{
		EXPECT_EQ(testedQueue.front(), i);
		testedQueue.pop();
	}
}


//5 

TEST(QueueTest, TestEmptyingQueue)
{
	const size_t desiredQueueSize = 5;
	std::queue<int> testedQueue;
	for (int i = 0; i < desiredQueueSize; ++i)
	{
		testedQueue.push(i);
	}

	for (int i = 0; i < desiredQueueSize; ++i)
	{
		testedQueue.pop();
	}
	
	EXPECT_TRUE(testedQueue.empty());
}

//TEST FIXTURE:

class StdQueueTest : public ::testing::Test
{
protected:
	StdQueueTest() //c-tor
	{
		for (int i = 0; i < desiredQueueSize; ++i)
		{
			testedQueue.push(i);
		}
	}

	const size_t desiredQueueSize = 5;
	std::queue<int> testedQueue; //OBJECT UNDER TEST
};

TEST_F(StdQueueTest, TestAddingElemnts)
{
	EXPECT_EQ(testedQueue.size(), desiredQueueSize);
}

TEST_F(StdQueueTest, TestRemovingElements)
{
	EXPECT_EQ(testedQueue.size(), desiredQueueSize);
	testedQueue.pop();
	EXPECT_EQ(testedQueue.size(), desiredQueueSize - 1);
}

TEST_F(StdQueueTest, TestElementOrderUsingPop)
{
	for (int i = 0; i < desiredQueueSize; ++i)
	{
		EXPECT_EQ(testedQueue.front(), i);
		testedQueue.pop();
	}
}

TEST_F(StdQueueTest, TestEmptyingQueue)
{
	for (int i = 0; i < desiredQueueSize; ++i)
	{
		testedQueue.pop();
	}



