#include <iostream>

using namespace std;

class SavingsAccount
{
public:
	SavingsAccount() {}
	SavingsAccount(int value);
	~SavingsAccount() {}
	static float annualInterestRate;
	//static member function
	void calculateMonthlyInterest();
	static void modifyIntererestRate(float value);
	//static member function
	float GetBalance() const { return savingsBalance; }
private:
	// Each member of the class contains a private data member 
	// savingsBalance indicating the amount the saver currently has 
	// on deposit.
	float savingsBalance;
};