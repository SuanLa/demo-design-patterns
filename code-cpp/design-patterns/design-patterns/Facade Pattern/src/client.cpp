#include <iostream>
#include "Mainframe.h"
#include "CPU.h"
#include "Memory.h"
#include "OS.h"
#include "HardDisk.h"

int main()
{
	Mainframe* mf = new Mainframe();
	mf->on();
	return 0;
}