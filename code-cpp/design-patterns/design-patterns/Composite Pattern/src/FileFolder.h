/**
* @Anthor: xxwy007
* @Date: 2023/05/31 16:35:12
*/
#ifndef _FILEFOLDER_H_
#define _FILEFOLDER_H_
#include "AntiVirusSoftware.h"
/**
*@class:
*/
class FileFolder:public AntiVirusSoftware
{
	AntiVirusSoftware** anti;
public:
	FileFolder(AntiVirusSoftware** an)
	{
		this->anti = an;
	}
	void antiVirus()
	{
		int i = 0;
		for (int i = 0;i<3;i++)
			anti[i]->antiVirus();
	}
	~FileFolder()
	{
		if(anti != nullptr)
		delete[] anti;
	}
};


#endif //_FILEFOLDER_H_