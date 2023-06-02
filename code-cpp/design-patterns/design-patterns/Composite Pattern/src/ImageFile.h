/**
* @Anthor: xxwy007
* @Date: 2023/05/31 16:35:02
*/
#ifndef _IMAGEFILE_H_
#define _IMAGEFILE_H_
#include "AntiVirusSoftware.h"
/**
*@class:
*/
class ImageFile:public AntiVirusSoftware
{
public:
	void antiVirus()
	{
		std::cout << "we are antiVirus your ImageFile!!!" << std::endl;
	}
};


#endif //_IMAGEFILE_H_
