#include <iostream>
#include "Picture.h"
#include "App.h"
int main()
{
	App* app = new Picture();
	app->run();
	delete app;
	app = nullptr;
	return 0;
}