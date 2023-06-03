/**
* @Anthor: xxwy007
* @Date: 2023/06/03 21:18:52
*/
#ifndef _PICTURE_H_
#define _PICTURE_H_
#include "Application.h"
#include "App.h"
/**
*@class:
*/
class Picture:public App
{
	Application realApp;
public:
	void run()
	{
		std::cout << "you clicked the shortcut(picture)!!! " << std::endl;
		realApp.run();
	}
};


#endif //_PICTURE_H_