#include <iostream>
#include "Picture.h"
#include "App.h"
int main()
{
	App* app = new Picture();
	app->run();
	return 0;
}