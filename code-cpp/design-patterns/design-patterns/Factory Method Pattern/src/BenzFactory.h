/**
* @Anthor: xxwy007
* @Date: 2023/05/26 20:58:20
*/
#ifndef _BENZFACTORY_H_
#define _BENZFACTORY_H_

/**
*@class:
*/
#include "MercedesBenz.h"
class BenzFactory:public CarFactory
{
public:
	Car* creatCar()
	{
		std::cout << "BenzFactory is working!!!!" << std::endl;
		return new MercedesBenz();
	}
};


#endif //_BENZFACTORY_H_