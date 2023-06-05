/**
* @Anthor: xxwy007
* @Date: 2023/06/05 20:34:51
*/
#ifndef _SAVINGACCOUNT_H_
#define _SAVINGACCOUNT_H_
#include"Bank.h"
/**
*@class:
*/
class SavingAccount:public Bank
{
	int account;//ÕËºÅ
	float rate = 0.15;//ÀûÂÊ
	float interest;
	float money;
public:
	SavingAccount(int acc, float m)
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
		if (account > 5000 || account < 9999)
			return 2;
		return 0;
	}
	//void displayinform()
	//{
	//	std::cout << "user : " << account << " your interest is " << interest << std::endl;
	//}
	float calcInterest()
	{
		interest = rate * money;
		return interest;
	}
};


#endif //_SAVINGACCOUNT_H_