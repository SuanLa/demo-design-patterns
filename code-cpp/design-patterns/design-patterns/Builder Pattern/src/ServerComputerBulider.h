/**
* @Anthor: xxwy007
* @Date: 2023/05/28 16:18:56
*/
#ifndef _SERVERCOMPUTERBULIDER_H_
#define _SERVERCOMPUTERBULIDER_H_
using namespace std;
/**
*@class:
*/
class ServerComputerBulider:public ComputerBuilder
{
public:
	ComputerBuilder* buildMEM()
	{
		computer->MEM = "sansung222";
		cout << "MEM sansung222 is making!!! " << endl;
		return this;
	}

	ComputerBuilder* buildCPU()
	{
		computer->CPU = "inter 14650KF";
		cout << "CPU inter 14650KF is making!!! " << endl;
		return this;
	}
	ComputerBuilder* buildSSD()
	{
		computer->SSD = "长江22";
		cout << "SSD长江22 is making!!! " << endl;
		return this;
	}
	ComputerBuilder* buildMobo()
	{
		computer->Mobo = "B560";
		cout << "Mobo  B560 is making!!! " << endl;
		return this;
	}
};


#endif //_SERVERCOMPUTERBULIDER_H_