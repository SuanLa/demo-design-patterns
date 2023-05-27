/**
* @Anthor: xxwy007
* @Date: 2023/05/27 15:03:13
*/
#ifndef _MYSQLCONNECTION_H_
#define _MYSQLCONNECTION_H_

/**
*@class:
*/
class MySQLConnection :public Connection
{
public:
	void connect()
	{
		std::cout<<"MySQL is Connected!!!"<<std::endl;
	}
};


#endif //_MYSQLCONNECTION_H_