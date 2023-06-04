/**
* @Anthor: xxwy007
* @Date: 2023/06/04 21:36:50
*/
#ifndef _ITERATOR_H_
#define _ITERATOR_H_
#include "Student.h"
/**
*@class:
*/
class Iterator
{
public:
	virtual Student* first() = 0;
	virtual Student* next() = 0;
	virtual Student* current() = 0;
	virtual bool hasNext() = 0;
};


#endif //_ITERATOR_H_