#include <iostream>
#include "SavingsAccnt.h"

using namespace std;

int main()
{
	// Instantiate two different objects of class SavingsAccount, saver1 
	// and saver2, with balances of $1000.00 and $2000.00, respectively.
	SavingsAccount Firstsaver(1000.00);
	SavingsAccount Secondsaver(2000.00);

	// Set the annualInterestRate to 2%.
	SavingsAccount::modifyIntererestRate(2);

	// Then calculate the monthly interest and print the new balances for 
	// each of the savers. 
	Firstsaver.calculateMonthlyInterest();
	cout << "Firstsaver Savings Balance: $" << Firstsaver.GetBalance() << endl;
	Secondsaver.calculateMonthlyInterest();
	cout << "Secondsaver Savings Balance: $" << Secondsaver.GetBalance() << endl;

	cout << endl;

	// Then set the annualInterestRate to 3%
	SavingsAccount::modifyIntererestRate(3);

	// and calculate the next month's interest and print the new balances 
	// for each of the savers
	Firstsaver.calculateMonthlyInterest();
	cout << "Firstsaver Savings Balance: $" << Firstsaver.GetBalance() << endl;
	Secondsaver.calculateMonthlyInterest();
	cout << "Secondsaver Savings Balance: $" << Secondsaver.GetBalance() << endl;

	cout << endl;
	return 0;
}