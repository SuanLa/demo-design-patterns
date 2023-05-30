#include <iostream>
#include "DogAdapter.h"
#include "CatAdaper.h"
#include "Animal.h"
#include "Role.h"
using namespace std;
Animal* config(int a)
{
	Animal* ani = nullptr;
	if (a == 1)
	{
		ani = new CatAdaper();

	}
	else if (a == 2)
	{
		ani = new DogAdapter();
	}
	return ani;
}
int main()
{
	Animal* animal = config(1);
	Role* Tom = new Role(animal);
	Tom->action();
	delete animal;
	animal = nullptr;
	return 0;
}