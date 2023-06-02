/**
* @Anthor: xxwy007
* @Date: 2023/05/31 16:36:27
*/
#ifndef _VIDEOFILE_H_
#define _VIDEOFILE_H_

/**
*@class:
*/
class VideoFile:public AntiVirusSoftware
{
public:
	void antiVirus()
	{
		std::cout << "we are antiVirus your VideoFile!!" << std::endl;
	}
};


#endif //_VIDEOFILE_H_