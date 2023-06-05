/**
* @Anthor: xxwy007
* @Date: 2023/06/05 22:25:39
*/
#ifndef _STORE_H_
#define _STORE_H_
#include "Book.h"
#include "LanguageBook.h"
#include "NovelBook.h"
#include "ComputerBook.h"
#include <iostream>
using namespace std;
/**
*@class:
*/
class Store
{
	//Book b;
public:
	/*Store(Book book)
	{
		b = book;
	}*/
	void discount(Book b)
	{
		if (b.price == 59.8)
		{
			b.price -= 2;
			cout << "The book is LanguageBook ,the price is 59.8, you need pay " << b.price << endl;
		}
		else if (b.price == 105.9)
		{
			b.price -= 10;
			cout << "The book is LanguageBook ,the price is 105.9, you need pay " << b.price << endl;
		}
		else if (b.price == 69.9)
		{
			b.price *= 0.9;
			cout << "The book is LanguageBook ,the price is 69.9, you need pay " << b.price << endl;
		}else
			cout << "you are not select book!!"  << endl;
	}
		
};


#endif //_STORE_H_