/**
* @Anthor: xxwy007
* @Date: 2023/06/05 16:31:18
*/
#ifndef _BOOKDECORATOR_H_
#define _BOOKDECORATOR_H_
#include "Decorator.h"
/**
*@class:
*/
class BookDecorator:public Decorator
{
public:
	BookDecorator(Book* book)
	{
		this->book = book;
	}
	void freeze()
	{
		std::cout << "Since it has overstayed many times,so book is freezed!!" << std::endl;
	}
	void lose()
	{
		std::cout << "The book is losed!!" << std::endl;
	}
};


#endif //_BOOKDECORATOR_H_