/**
* @Anthor: xxwy007
* @Date: 2023/05/30 20:34:49
*/
#ifndef _DOGADAPTER_H_
#define _DOGADAPTER_H_
#include "Dog.h"
#include "Animal.h"
/**
*@class:
*/
class DogAdapter:public Animal
{
	Dog* dog = new Dog();
public:
	void action()
	{
		dog->bark();
	}
	~DogAdapter()
	{
		if (dog)
		{
			delete dog;
			dog = nullptr;
		}
	}
};


#endif //_DOGADAPTER_H_