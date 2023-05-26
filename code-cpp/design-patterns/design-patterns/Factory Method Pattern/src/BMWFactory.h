/**
* @Anthor: xxwy007
* @Date: 2023/05/26 20:57:48
*/
#ifndef _BMWFACTORY_H_
#define _BMWFACTORY_H_

/**
*@class:
*/
#include "BMWX8.h"
class BMWFactory : public CarFactory
{
public:
	Car* creatCar()
	{
		std::cout << "BMWFactory is working!!!!" << std::endl;
		return new BMWX8();
	}
};


#endif //_BMWFACTORY_H_