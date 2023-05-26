/**
* @Anthor: xxwy007
* @Date: 2023/05/26 15:56:13
*/
#ifndef _MONEYFACTORY_H_
#define _MONEYFACTORY_H_

/**
*@class:
*/
#include "Money.h"
#include "Dollar.h"
#include "RMB.h"
class MoneyFactory
{
public:
	static Money* getMoney(int num)
	{
		Money* money = nullptr;
		if (num == 1)
		{
			money = new RMB();
		}
		else if (num == 2)
		{
			money = new Dollar();
		}

		return money;
	}
};


#endif //_MONEYFACTORY_H_

