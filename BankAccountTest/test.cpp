#include "pch.h"
#include "../Bank/BankAccount.h"

TEST(BankAccountTest, TestEmptyAccount) 
{
	BankAccount account;

	EXPECT_EQ(account.getAvailableFunds(), 0);
}

TEST(BankAccountTest, TestDeposit)
{
	BankAccount account;

	account.deposit(1000);

	EXPECT_EQ(account.getAvailableFunds(), 1000);
}

TEST(BankAccountTest, TestWithdrawalSuccess)
{
	BankAccount account;

	account.deposit(1000);
	EXPECT_TRUE(account.withdraw(100));

	EXPECT_EQ(account.getAvailableFunds(), 900);
}

TEST(BankAccountTest, TestWithdrawalFail)
{
	BankAccount account;

	account.deposit(100);

	EXPECT_FALSE(account.withdraw(1000));        // trzeba sprawdzi� obydwa warunki expect
	EXPECT_EQ(account.getAvailableFunds(), 100);
}
