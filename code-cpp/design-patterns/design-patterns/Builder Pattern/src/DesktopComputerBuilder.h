/**
* @Anthor: xxwy007
* @Date: 2023/05/28 16:18:36
*/
#ifndef _DESKTOPCOMPUTERBUILDER_H_
#define _DESKTOPCOMPUTERBUILDER_H_
using namespace std;
/**
*@class:
*/
class DesktopComputerBuilder:public ComputerBuilder
{
public:
	ComputerBuilder* buildMEM()
	{
		computer->MEM = "sansung111";
		cout << "MEM sansung is making!!! " << endl;
		return this;
	}

	ComputerBuilder* buildCPU()
	{
		computer->CPU = "inter 11650X";
		cout << "CPU inter 11650X is making!!! " << endl;
		return this;
	}
	ComputerBuilder* buildSSD()
	{
		computer->SSD = "长江121";
		cout << "SSD长江121 is making!!! " << endl;
		return this;
	}
	ComputerBuilder* buildMobo()
	{
		computer->Mobo = "B760";
		cout << "Mobo  B760 is making!!! " << endl;
		return this;
	}
};


#endif //_DESKTOPCOMPUTERBUILDER_H_