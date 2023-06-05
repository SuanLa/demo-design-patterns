/**
* @Anthor: xxwy007
* @Date: 2023/06/05 16:30:13
*/
#ifndef _BOOK_H_
#define _BOOK_H_

/**
*@class:
*/
class Book
{
public:
	virtual void borrowBook() = 0;
	virtual void returnBook() = 0;
};


#endif //_BOOK_H_