/**
* @Anthor: xxwy007
* @Date: 2023/06/04 21:37:29
*/
#ifndef _CLASS_H_
#define _CLASS_H_
#include "Student.h"
#include "ClassAggregate.h"
/**
*@class:
*/
class Class:public ClassAggregate
{
	Student* stuArray[5];
public:
	Class()
	{
		Student* stu1 = new Student("ddg", 18);
		Student* stu2 = new Student("aw", 17);
		Student* stu3 = new Student("yunhai", 19);
		Student* stu4 = new Student("hzy", 21);
		Student* stu5 = new Student("aji", 17);
		stuArray[0] = stu1;
		stuArray[1] = stu2;
		stuArray[2] = stu3;
		stuArray[3] = stu4;
		stuArray[4] = stu5;
	}
	Iterator* getIterator()
	{
		Iterator* iter = new StudentItearator(stuArray);
		return iter;
		//return nullptr;
	}
	void printStu()
	{
		for (int i = 0; i < 5; i++)
		{
			std::cout << "name:" << stuArray[i]->name << "\t "<<"age:" << stuArray[i]->age << std::endl;
		}
	}
	~Class()
	{
		for (int i = 0; i < 5; i++)
		{
			if (stuArray[i] != nullptr)
			{
				delete stuArray[i];
				stuArray[i] = nullptr;
			}
		}
	}
};


#endif //_CLASS_H_