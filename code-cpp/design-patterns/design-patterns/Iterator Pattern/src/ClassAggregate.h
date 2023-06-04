/**
* @Anthor: xxwy007
* @Date: 2023/06/04 21:36:30
*/
#ifndef _CLASSAGGREGATE_H_
#define _CLASSAGGREGATE_H_
#include "Iterator.h"
/**
*@class:
*/
class ClassAggregate
{
public:
	virtual Iterator* getIterator() = 0;
};


#endif //_CLASSAGGREGATE_H_