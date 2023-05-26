/**
* @Anthor: xxwy007
* @Date: 2023/05/26 20:46:52
*/
#ifndef _CARFACTORY_H_
#define _CARFACTORY_H_

/**
*@class:
*/
#include "Car.h"
class CarFactory
{
public:
	virtual Car* creatCar() = 0;
};


#endif //_CARFACTORY_H_
