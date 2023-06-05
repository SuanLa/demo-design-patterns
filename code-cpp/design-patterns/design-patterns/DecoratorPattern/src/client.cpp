#include <iostream>
#include "Book.h"
#include "BookDecorator.h"
#include "ConcreteBook.h"
int main()
{
	Book* book = new ConcreteBook();
	BookDecorator* bookDec = new BookDecorator(book);
	bookDec->borrowBook();
	bookDec->returnBook();
	bookDec->freeze();
	bookDec->lose();
	return 0;
}