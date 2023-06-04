#include <iostream>
#include "StudentItearator.h"
#include "Class.h"
#include "Iterator.h"
using namespace std;
int main()
{
	Class* cls = new Class();
	Iterator* iter = cls->getIterator();
	Student* stu = iter->first();
	cout<<"------------test current()------------"<<endl;
	cout << "name:" << iter->current()->name << "\t " << "age:" << iter->current()->age << endl;
	cout << "------------test next()------------" << endl;
	while (1)
	{
		if (iter->hasNext())
		std::cout << "name:" << stu->name << "\t" << "age:" << stu->age << std::endl;
		if (iter->hasNext())
		{
			stu = iter->next();
		}else break;
	}
//	cout << "--------------------------------" << endl;
	//cls->printStu();
	return 0;
}