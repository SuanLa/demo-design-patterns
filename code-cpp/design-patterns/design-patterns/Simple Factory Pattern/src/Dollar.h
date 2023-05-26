/**
* @Anthor: xxwy007
* @Date: 2023/05/26 15:55:52
*/
#ifndef _DOLLAR_H_
#define _DOLLAR_H_

/**
*@class:
*/
#include <iostream>
class Dollar : public Money
{
public:
	void discripe()
	{
		std::cout << "This is DOllar!" << std::endl;
	}
};


#endif //_DOLLAR_H_
