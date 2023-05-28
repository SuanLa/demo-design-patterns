/**
* @Anthor: xxwy007
* @Date: 2023/05/28 16:18:09
*/
#ifndef _COMPUTERBUILDER_H_
#define _COMPUTERBUILDER_H_
#include "Computer.h"
/**
*@class:
*/
class ComputerBuilder
{
public:
	Computer* computer = new Computer();
public:
	 Computer* build()
	{
		Computer* target = new Computer();
		target->CPU = computer->CPU;
		target->MEM = computer->MEM;
		target->Mobo = computer->Mobo;
		target->SSD = computer->SSD;
		return target;
	}
	virtual ComputerBuilder* buildCPU() = 0;
	virtual ComputerBuilder* buildMEM() = 0;
	virtual ComputerBuilder* buildSSD() = 0;
	virtual ComputerBuilder* buildMobo() = 0;

	~ComputerBuilder()
	{
		if (computer != NULL)
		{
			delete computer;
			computer = nullptr;
		}
	}
};


#endif //_COMPUTERBUILDER_H_