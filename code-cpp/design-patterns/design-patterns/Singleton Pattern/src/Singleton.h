/**
* @Anthor: xxwy007
* @Date: 2023/05/28 14:26:28
*/
#ifndef _SINGLETON_H_
#define _SINGLETON_H_

/**
*@class:¶öºº
*/
class Singleton
{
private:
	static Singleton* instance;
	//·ÀÖ¹¿½±´
	Singleton(Singleton const&) = delete;
	Singleton& operator=(Singleton const&) = delete;

public:
	static Singleton* getInstance()
	{
		std::cout << "you are get instance(  " <<&instance <<")!!" << std::endl;
		return instance;
	}
	void deleteSingleton()
	{
		delete instance;
	}
};
Singleton* Singleton::instance = nullptr;

#endif //_SINGLETON_H_