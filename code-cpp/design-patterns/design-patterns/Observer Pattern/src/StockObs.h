/**
* @Anthor: xxwy007
* @Date: 2023/06/04 17:03:52
*/
#ifndef _STOCKOBS_H_
#define _STOCKOBS_H_
//#include "Stock.h"
/**
*@class:
*/
class Stock;
class StockObs
{
	int price;
public:
	virtual void update(int price) = 0;
	int getPrice()
	{
		return price;
	}
};


#endif //_STOCKOBS_H_