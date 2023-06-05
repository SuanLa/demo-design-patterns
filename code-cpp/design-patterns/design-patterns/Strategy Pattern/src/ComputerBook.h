/**
* @Anthor: xxwy007
* @Date: 2023/06/05 22:23:50
*/
#ifndef _COMPUTERBOOK_H_
#define _COMPUTERBOOK_H_
#include "Book.h"
/**
*@class:
*/
class ComputerBook:public Book
{
public:
	ComputerBook()
	{
		price = 69.9;
	}
};


#endif //_COMPUTERBOOK_H_