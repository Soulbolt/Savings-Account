#include <iostream>
#include "SavingsAccnt.h"
// copy constructor to initialize the value at instantiation
SavingsAccount::SavingsAccount(int value)
{
	savingsBalance = value;
}

// Use a static data member annualInterestRate to store the annual interest
// rate for each of the savers. 
float SavingsAccount::annualInterestRate = 0;

// Provide member function calculateMonthlyInterest that calculates the 
// monthly interest by multiplying the savingsBalance by annualInterestRate
// divided by 12 and then adds this interest to savingsBalance.
void SavingsAccount::calculateMonthlyInterest()
{
	savingsBalance += ((savingsBalance * annualInterestRate) / 12);
}

//Provide a static member function modifyIntererestRate that sets the 
// static annualInterestRate to a new value. 
void SavingsAccount::modifyIntererestRate(float value)
{
	annualInterestRate = value;
}