/**
* @Anthor: xxwy007
* @Date: 2023/06/05 16:30:51
*/
#ifndef _DECORATOR_H_
#define _DECORATOR_H_
#include "Book.h"
/**
*@class:
*/
class Decorator:public Book
{
public:
	Book* book;
public:
	void borrowBook()
	{
		book->borrowBook();
	}
	void returnBook()
	{
		book->returnBook();
	}
};


#endif //_DECORATOR_H_