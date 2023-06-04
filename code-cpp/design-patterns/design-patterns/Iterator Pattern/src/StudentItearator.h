/**
* @Anthor: xxwy007
* @Date: 2023/06/04 21:37:08
*/
#ifndef _STUDENTITEARATOR_H_
#define _STUDENTITEARATOR_H_
#include "Student.h"
#include "Iterator.h"
/**
*@class:
*/
class StudentItearator:public Iterator
{
	Student* stuArray[5] = {0};
	int index = 0;
public:
	StudentItearator(Student* stuArray[])
	{
		for (int i = 0; i < 5; i++)
		{
			this->stuArray[i] = stuArray[i];
		}
	}
	Student* first()
	{
		return stuArray[0];
	}
	Student* next()
	{
		index++;
		return  stuArray[index];
	}
	Student* current()
	{
		return stuArray[index];
	}
	bool hasNext()
	{
		if (index >= 5)
			return false;
		return true;
	}
};


#endif //_STUDENTITEARATOR_H_