/**
* @Anthor: xxwy007
* @Date: 2023/05/27 15:05:48
*/
#ifndef _ORACLESTATEMENT_H_
#define _ORACLESTATEMENT_H_

/**
*@class:
*/
#include "Statement.h"
class OracleStatement:public Statement
{
public:
	void statement()
	{
		std::cout << "OracleStatement objects are ready!!!  " << std::endl;
	}
};


#endif //_ORACLESTATEMENT_H_