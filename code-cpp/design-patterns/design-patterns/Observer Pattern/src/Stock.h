/**
* @Anthor: xxwy007
* @Date: 2023/06/03 22:02:23
*/
#ifndef _STOCK_H_
#define _STOCK_H_
#include <iostream>
#include <list>
#include "StockObs.h"
using namespace std;
/**
*@class:
*/
class Stock
{
public:
	list<StockObs*> stockList;
	int price;
	virtual void notify() = 0;
	int getPrice()
	{
		return price;
	}
	void setPrice(int pri)
	{
		std::cout << "price is changed!!" << std::endl;
		if (price - pri > 5)
		{
			price = pri;
			notify();
		}
			price = pri;
	}
	void addObs(StockObs* so)
	{
		stockList.push_back(so);
	}
	void removeObs(StockObs* so)
	{
		stockList.remove(so);
	}
};


#endif //_STOCK_H_