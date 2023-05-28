/**
* @Anthor: xxwy007
* @Date: 2023/05/28 14:53:06
*/
#ifndef _SINGLETON2_H_
#define _SINGLETON2_H_

/**
*@class:懒汉模式
*/
#include<mutex>
class Singleton2
{
public:
	static Singleton2* getInstance()
	{
		//为了实例创建好以后再次访问避免加锁影响性能
		if (nullptr == m_pInstance) {
			mtx.lock();
			//为了线程安全
			if (nullptr == m_pInstance) {
				m_pInstance = new Singleton2();
			}
			mtx.unlock();
		}
		std::cout << "you are get instance(  " << &m_pInstance << ")!!" << std::endl;
		return m_pInstance;
	}
	void deleteSingleton()
	{
		delete m_pInstance;
	}

private:
	Singleton2() {};
	//防止拷贝
	Singleton2(Singleton2 const&) = delete;
	Singleton2& operator=(Singleton2 const&) = delete;
	static Singleton2* m_pInstance;
	static std::mutex mtx;
};
Singleton2* Singleton2::m_pInstance;
std::mutex Singleton2::mtx;

#endif //_SINGLETON2_H_