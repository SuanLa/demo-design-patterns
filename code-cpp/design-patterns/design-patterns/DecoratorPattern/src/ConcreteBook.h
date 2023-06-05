/**
* @Anthor: xxwy007
* @Date: 2023/06/05 16:30:37
*/
#ifndef _CONCRETEBOOK_H_
#define _CONCRETEBOOK_H_
#include "Book.h"
/**
*@class:
*/
class ConcreteBook:public Book
{
public:
	void borrowBook()
	{
		std::cout << "The ¡¶Harry Potter¡· is borrowed!!" << std::endl;
	}
	void returnBook()
	{
		std::cout << "The ¡¶Harry Potter¡· is returned!!" << std::endl;
	}
};


#endif //_CONCRETEBOOK_H_