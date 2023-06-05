/**
* @Anthor: xxwy007
* @Date: 2023/06/05 20:34:10
*/
#ifndef _BANK_H_
#define _BANK_H_
#include <iostream>
using namespace std;
/**
*@class:
*/
class Bank
{
	int acc = 0;
	int user = 0;
	float inter = 0;
	float money = 0;
public:
	void startCalc() 
	{
		acc = searchAccount();
		user = accountType(acc);
		inter = calcInterest();
		displayinform();
	}
	void displayinform()
	{
		if (user == 1)
		{
			cout<<"user: "<< acc<< " you are CurrentAccount, your interest is " << inter << endl;
		}
		else if (user == 2)
		{
			cout << "user: " << acc << " you are SavingAccount, your interest is " << inter << endl;
		}
		else
		{
			cout << " your accout is error!!" << endl;
		}
	}
	int accountType(int account)
	{
		if (account > 1000 && account < 5000)
			return 1;
		else if (account > 5000 && account < 9999)
			return 2;
		return 0;
	}
	virtual int searchAccount() = 0;
	virtual float calcInterest() = 0;
};


#endif //_BANK_H_