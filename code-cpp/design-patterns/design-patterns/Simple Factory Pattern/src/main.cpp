#include <iostream>
#include "Money.h"
#include "MoneyFactory.h"
int main()
{
	Money* money = nullptr;
	money = MoneyFactory::getMoney(1);
	money->discripe();
	delete money;
}