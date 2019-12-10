// Uniform-Initialization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template<typename T>
class SA {
	public:
		SA(initializer_list<T> list) {
			for (auto element : list) {
				cout << element << endl;
			}
		}

		SA(int num) {
		
		}
};

int main()
{
	SA<int> a(10), b{ 1,2,3 };
    return 0;
}

