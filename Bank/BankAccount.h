#pragma once
class BankAccount
{
public:
	BankAccount(); // konstruktor domyslny

	bool withdraw(int amount); // zwraca czy operacja sie udala
	void deposit(int amount);
	int getAvailableFunds() const; //getter powinien byc const
private:
	int accountBalance;
};

