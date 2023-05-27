#include <iostream>
#include "DBFactory.h"
#include "Connection.h"
#include "Statement.h"
#include "OracleFactory.h"
#include "MySQLFactory.h"
DBFactory* selectDB(int a)
{
	DBFactory* DBFac = nullptr;
	if (a == 1)
	{
		OracleFactory* Ora = new OracleFactory();
		DBFac = Ora;
	}
	else if (a == 2)
	{
		MySQLFactory* MyS = new MySQLFactory();
		DBFac = MyS;
	}
	else std::cout << "error" << std::endl;
	return DBFac;
}

int main()
{
	DBFactory* DBFac = nullptr;
	DBFac = selectDB(1);
	Connection* con=DBFac->creatConnection();
	Statement* state=DBFac->creatStatement();
	con->connect();
	state->statement();
	delete DBFac;
	DBFac = nullptr;
	delete con;
	con = nullptr;
	delete state;
	state = nullptr;

}