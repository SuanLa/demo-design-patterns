#include <iostream>
#include "CarFactory.h"
#include "Car.h"
#include "BenzFactory.h"
#include "BMWFactory.h"

CarFactory* select(int a)
{
	CarFactory* carFac = nullptr;
	switch (a)
	{
	case 1:carFac = new BenzFactory(); break;
	case 2:carFac = new BMWFactory(); break;
		default:std::cout << "no this type£¡£¡" << std::endl;
	}
	return carFac;
}
int main()
{
	CarFactory* carFac = nullptr;
	carFac=select(2);
	Car* car = carFac->creatCar();
	car->showCar();
	delete carFac;
	carFac = nullptr;
	delete car;
	car = nullptr;
}