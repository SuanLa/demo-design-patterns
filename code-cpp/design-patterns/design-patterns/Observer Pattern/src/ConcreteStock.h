/**
* @Anthor: xxwy007
* @Date: 2023/06/03 22:02:39
*/
#ifndef _CONCRETESTOCK_H_
#define _CONCRETESTOCK_H_
#include "Obs.h"
#include "Stock.h"
using namespace std;
/**
*@class:
*/
class ConcreteStock:public Stock
{
public:
	ConcreteStock()
	{
		price = 100;
	}
	/*void notify(StockObs* obs)
	{
		std::cout << "The stock price is changed !!" << std::endl;
	}*/
	void notify()
	{
		std::cout << "The stock price is changed !!"<< std::endl;
		for (list<StockObs*>::iterator so = stockList.begin() ;so!= stockList.end();so++)
		{
			if ((*so)->getPrice() != this->price)
				(*so)->update(this->price);
		}
	}
};


#endif //_CONCRETESTOCK_H_