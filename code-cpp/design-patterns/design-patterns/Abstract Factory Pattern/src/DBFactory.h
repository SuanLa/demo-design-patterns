/**
* @Anthor: xxwy007
* @Date: 2023/05/27 14:58:53
*/
#ifndef _DBFACTORY_H_
#define _DBFACTORY_H_

/**
*@class:
*/
#include "Statement.h"
#include "Connection.h"
class DBFactory
{
public:
	virtual Connection* creatConnection()= 0;
	virtual Statement* creatStatement()= 0;

};


#endif //_DBFACTORY_H_