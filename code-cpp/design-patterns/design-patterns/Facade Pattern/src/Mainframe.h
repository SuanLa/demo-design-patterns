/**
* @Anthor: xxwy007
* @Date: 2023/06/01 20:11:10
*/
#ifndef _MAINFRAME_H_
#define _MAINFRAME_H_
#include "CPU.h"
#include "Memory.h"
#include "OS.h"
#include "HardDisk.h"
/**
*@class:
*/
class Mainframe
{
	CPU c;
	Memory m;
	OS os;
	HardDisk h;
public:
	void on()
	{
		c.run();
		m.check();
		os.load();
		h.read();
	}

};


#endif //_MAINFRAME_H_
