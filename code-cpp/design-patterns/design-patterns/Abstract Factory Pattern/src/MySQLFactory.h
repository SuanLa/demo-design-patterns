/**
* @Anthor: xxwy007
* @Date: 2023/05/27 15:01:27
*/
#ifndef _MYSQLFACTORY_H_
#define _MYSQLFACTORY_H_

/**
*@class:
*/
#include "MySQLConnection.h"
#include "MySQLStatement.h"
#include "DBFactory.h"
class MySQLFactory :public DBFactory
{
public:
	Connection* creatConnection()
	{
		std::cout << "MySQLConnection is creating !!!" << std::endl;
		return new MySQLConnection();
	}
	Statement* creatStatement()
	{
		std::cout << "MySQLStatement is creating !!!" << std::endl;
		return new MySQLStatement();
	}
};


#endif //_MYSQLFACTORY_H_