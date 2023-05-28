#include <iostream>
#include "Singleton.h"
#include "Singleton2.h"
Singleton2* single22;
Singleton* single;
int main()
{
	std::cout << "¶öºº" << std::endl;
	Singleton* single1 = single->getInstance();
	Singleton* single2 = single->getInstance();
	single->deleteSingleton();
	
	std::cout << "ÀÁºº" << std::endl;
	Singleton2* single3 = single22->getInstance();
	Singleton2* single4 = single22->getInstance();
	single22->deleteSingleton();
}
