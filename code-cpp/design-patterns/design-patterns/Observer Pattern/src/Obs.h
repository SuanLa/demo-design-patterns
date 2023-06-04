/**
* @Anthor: xxwy007
* @Date: 2023/06/03 22:03:15
*/
#ifndef _OBS_H_
#define _OBS_H_
#include "StockObs.h"
/**
*@class:
*/
class Obs:public StockObs
{
	int price;
public:
	void update(int pri)
	{
		this->price = pri;
		std::cout << "The price is update!!-> " << this->price << std::endl;
	}
};


#endif //_OBS_H_