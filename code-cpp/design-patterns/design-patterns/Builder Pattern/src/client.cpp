#include<iostream>
#include "Computer.h"
#include "ConputerDirector.h"
#include "ComputerBuilder.h"
#include "NoteBookBuilder.h"
#include "ServerComputerBulider.h"
#include "DesktopComputerBuilder.h"
using namespace std;
ComputerBuilder* computerSelect(int a)
{
	ComputerBuilder* cb = nullptr;
	if (a == 1)
	{
		ComputerBuilder* temp = new NoteBookBuilder();
		cb = temp;
		cout<<"NoteBookBuilder is making!!!"<<endl;
		return cb;
	}
	else if (a == 2)
	{
		ComputerBuilder* temp = new ServerComputerBulider();
		cb = temp;
		cout << "ServerComputerBulider is making!!!" << endl;
		return cb;
	}
	else if (a == 3)
	{
		ComputerBuilder* temp = new DesktopComputerBuilder();
		cb = temp;
		cout << "DesktopComputerBuilder is making!!!" << endl;
		return cb;
	}
	return cb;
}
int main()
{
	ComputerBuilder* cb = computerSelect(3);
	ConputerDirector* cd = new ConputerDirector(cb);
	cd->construct();
	delete cd;

}