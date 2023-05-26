/**
* @Anthor: xxwy007
* @Date: 2023/05/26 15:55:17
*/
#ifndef _RMB_H_
#define _RMB_H_

/**
*@class:
*/

class RMB : public Money
{
public:
	void discripe()
	{
		std::cout << "This is RMB!" << std::endl;
	}
};


#endif //_RMB_H_