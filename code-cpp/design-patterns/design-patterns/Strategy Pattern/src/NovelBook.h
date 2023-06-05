/**
* @Anthor: xxwy007
* @Date: 2023/06/05 22:24:55
*/
#ifndef _NOVELBOOK_H_
#define _NOVELBOOK_H_
#include "Book.h"
/**
*@class:
*/
class NovelBook:public Book
{
public:
	NovelBook()
	{
		price = 105.9;
	}
};


#endif //_NOVELBOOK_H_