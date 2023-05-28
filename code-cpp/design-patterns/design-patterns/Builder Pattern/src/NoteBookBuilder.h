/**
* @Anthor: xxwy007
* @Date: 2023/05/28 16:18:46
*/
#ifndef _NOTEBOOKBUILDER_H_
#define _NOTEBOOKBUILDER_H_

/**
*@class:
*/
class NoteBookBuilder:public ComputerBuilder
{
public:
	ComputerBuilder* buildMEM()
	{
		computer->MEM = "sansung";
		cout<<"MEM sansung is making!!! "<<endl;
		return this;
	}

	ComputerBuilder* buildCPU()
	{
		computer->CPU = "inter 12650U";
		cout << "CPU inter 12650U is making!!! " << endl;
		return this;
	}
	ComputerBuilder* buildSSD()
	{
		computer->SSD = "长江";
		cout << "SSD长江 is making!!! " << endl;
		return this;
	}
	ComputerBuilder* buildMobo()
	{
		computer->Mobo = "B660";
		cout << "Mobo  B660 is making!!! " << endl;
		return this;
	}
};


#endif //_NOTEBOOKBUILDER_H_