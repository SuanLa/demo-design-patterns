/**
* @Anthor: xxwy007
* @Date: 2023/06/03 21:18:33
*/
#ifndef _APPLICATION_H_
#define _APPLICATION_H_
#include "App.h"
/**
*@class:
*/
class Application:public App
{
public:
	void run()
	{
		std::cout << "Application is running!!!" << std::endl;
	}
};


#endif //_APPLICATION_H_