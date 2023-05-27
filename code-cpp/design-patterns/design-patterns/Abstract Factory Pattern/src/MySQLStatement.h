/**
* @Anthor: xxwy007
* @Date: 2023/05/27 15:05:13
*/
#ifndef _MYSQLSTATEMENT_H_
#define _MYSQLSTATEMENT_H_

/**
*@class:
*/
class MySQLStatement:public Statement
{
public:
	void statement()
	{
		std::cout << "MySQLStatement objects are ready!!!  " << std::endl;
	}
};


#endif //_MYSQLSTATEMENT_H_