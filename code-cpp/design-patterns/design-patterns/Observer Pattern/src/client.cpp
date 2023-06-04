#include <iostream>
#include "ConcreteStock.h"
#include "Obs.h"
#include "Stock.h"
#include "StockObs.h"
using namespace std;
int main()
{

	Stock* stock = new ConcreteStock();
	StockObs* obs1 = new Obs();
	StockObs* obs2 = new Obs();
	stock->addObs(obs1);
	stock->addObs(obs2);
	stock->setPrice(97);
	stock->setPrice(90);
	stock->removeObs(obs1);
	stock->setPrice(80);
	delete stock;
	delete obs1;
	delete obs2;
	stock = nullptr;
	obs1 = nullptr;
	obs2 = nullptr;
	return 0;
}
