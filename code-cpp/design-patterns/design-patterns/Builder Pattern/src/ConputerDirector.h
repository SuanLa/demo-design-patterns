/**
* @Anthor: xxwy007
* @Date: 2023/05/28 16:18:21
*/
#ifndef _CONPUTERDIRECTOR_H_
#define _CONPUTERDIRECTOR_H_
using namespace std;
/**
*@class:
*/
#include "ComputerBuilder.h"
class ConputerDirector
{
public:
	ComputerBuilder* bulider = nullptr;
	ConputerDirector(ComputerBuilder* bulider)
	{
		this->bulider = bulider;
	}
	Computer* construct()
	{
		bulider->buildCPU();
		bulider->buildMEM();
		bulider->buildMobo();
		bulider->buildSSD();
		bulider->build();
		return bulider->computer;
	}
	~ConputerDirector()
	{
		if (bulider != NULL)
		{
			delete bulider;
			bulider = nullptr;
		}
	}
};


#endif //_CONPUTERDIRECTOR_H_
