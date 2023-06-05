#include "Bank.h"
#include "SavingAccount.h"
#include "CurrentAccount.h"
int main()
{
	SavingAccount* sacc = new SavingAccount(6666,10000);
	CurrentAccount* cacc = new CurrentAccount(2222, 10000);
	sacc->startCalc();
	cacc->startCalc();
	return 0;
}