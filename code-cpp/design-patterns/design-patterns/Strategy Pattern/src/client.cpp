#include "Store.h"
int main()
{
	Book book = ComputerBook();
	Store* store = new Store();
	store->discount(book);
	Book book1 = LanguageBook();
	store->discount(book1);
	Book book2 = NovelBook();
	store->discount(book2);
	delete store;
	store = nullptr;
	return 0;
}