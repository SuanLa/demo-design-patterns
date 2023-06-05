/**
* @Anthor: xxwy007
* @Date: 2023/06/05 20:34:30
*/
#ifndef _CURRENTACCOUNT_H_
#define _CURRENTACCOUNT_H_
#include"Bank.h"
/**
*@class:
*/
class CurrentAccount:public Bank
{
	int account;//ÕËºÅ
	float rate = 0.035;//ÀûÂÊ
	float interest;
	float money;
public:
	CurrentAccount(int acc, float m)
	{
		account = acc;
		money = m;
	}
	int searchAccount()
	{
		return account;
	}
	int accountType()
	{
		if (account > 1000 || account < 5000)
			return 1;
		return 0;
	}
	void displayinform()
	{
		std::cout << "user : " << account << " your interest is " << interest << std::endl;
	}
	float calcInterest()
	{
		interest = rate * money;
		return interest;
	}
};


#endif //_CURRENTACCOUNT_H_
