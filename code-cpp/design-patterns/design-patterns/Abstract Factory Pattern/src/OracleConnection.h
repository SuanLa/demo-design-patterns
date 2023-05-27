/**
* @Anthor: xxwy007
* @Date: 2023/05/27 15:03:50
*/
#ifndef _ORACLECONNECTION_H_
#define _ORACLECONNECTION_H_

/**
*@class:
*/
class OracleConnection :public Connection
{
public:
	void connect()
	{
		std::cout << "Oracle is Connected!!!" << std::endl;
	}
};


#endif //_ORACLECONNECTION_H_