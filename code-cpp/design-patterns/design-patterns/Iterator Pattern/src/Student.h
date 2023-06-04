/**
* @Anthor: xxwy007
* @Date: 2023/06/04 21:37:43
*/
#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string.h>
/**
*@class:
*/
class Student
{
public:
	std::string name;
	int age;
	Student(std::string name, int age)
	{
		this->name = name;
		this->age = age;
	}
};


#endif //_STUDENT_H_