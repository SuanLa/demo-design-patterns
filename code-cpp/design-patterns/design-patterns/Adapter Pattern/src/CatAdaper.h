/**
* @Anthor: xxwy007
* @Date: 2023/05/30 20:33:58
*/
#ifndef _CATADAPER_H_
#define _CATADAPER_H_
#include "Cat.h"
#include "Animal.h"
/**
*@class:
*/
class CatAdaper:public Animal
{
	Cat* cat = new Cat();
public:
	void action()
	{
		cat->scratch();
	}
	~CatAdaper()
	{
		if (cat)
		{
			delete cat;
			cat = nullptr;
		}
	}
};


#endif //_CATADAPER_H_