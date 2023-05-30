/**
* @Anthor: xxwy007
* @Date: 2023/05/30 20:51:38
*/
#ifndef _ROLE_H_
#define _ROLE_H_
#include "Animal.h"
/**
*@class:
*/
class Role
{
	Animal* ani = nullptr;
public:
	Role(Animal* ani )
	{
		this->ani = ani;
	}
	void action()
	{
		std::cout << "Tom  ";
		ani->action();
	}
};


#endif //_ROLE_H_