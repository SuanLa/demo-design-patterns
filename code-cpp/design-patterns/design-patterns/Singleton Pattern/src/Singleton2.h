/**
* @Anthor: xxwy007
* @Date: 2023/05/28 14:53:06
*/
#ifndef _SINGLETON2_H_
#define _SINGLETON2_H_

/**
*@class:����ģʽ
*/
#include<mutex>
class Singleton2
{
public:
	static Singleton2* getInstance()
	{
		//Ϊ��ʵ���������Ժ��ٴη��ʱ������Ӱ������
		if (nullptr == m_pInstance) {
			mtx.lock();
			//Ϊ���̰߳�ȫ
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
	//��ֹ����
	Singleton2(Singleton2 const&) = delete;
	Singleton2& operator=(Singleton2 const&) = delete;
	static Singleton2* m_pInstance;
	static std::mutex mtx;
};
Singleton2* Singleton2::m_pInstance;
std::mutex Singleton2::mtx;

#endif //_SINGLETON2_H_