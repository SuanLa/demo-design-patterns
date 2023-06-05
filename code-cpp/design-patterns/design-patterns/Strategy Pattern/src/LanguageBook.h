/**
* @Anthor: xxwy007
* @Date: 2023/06/05 22:24:25
*/
#ifndef _LANGUAGEBOOK_H_
#define _LANGUAGEBOOK_H_
#include "Book.h"
/**
*@class:
*/
class LanguageBook:public Book
{
public:
	LanguageBook()
	{
		price = 59.8;
	}
};


#endif //_LANGUAGEBOOK_H_