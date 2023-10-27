#ifndef Singleton_HPP
#define Singleton_HPP

#include <iostream>

template <typename name>
class Singleton {
	public:
		static name& getInstance(){
			static name instance;
			return instance;
		}

	protected:
		Singleton(){};
};

#endif