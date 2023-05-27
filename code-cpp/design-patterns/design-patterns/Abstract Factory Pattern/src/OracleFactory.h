/**
* @Anthor: xxwy007
* @Date: 2023/05/27 14:59:56
*/
#ifndef _ORACLEFACTORY_H_
#define _ORACLEFACTORY_H_

/**
*@class:
*/
#include "OracleConnection.h"
#include "OracleStatement.h"
#include "OracleFactory.h"
class OracleFactory : public DBFactory
{
public:
	Connection* creatConnection()
	{
		std::cout << "OracleConnection is creating !!!" << std::endl;
		return new OracleConnection();
	}
	Statement* creatStatement()
	{
		std::cout << "OracleStatement is creating !!!" << std::endl;
		return new OracleStatement();
	}
};


#endif //_ORACLEFACTORY_H_

