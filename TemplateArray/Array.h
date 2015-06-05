#ifndef ARRAY_H_
#define ARRAY_H_
#include <iostream>
#include <typeinfo>

using namespace std;
template< typename T > class array 
{
private:
	int size;
	T *myarray;
public:

	array(int s)
	{
		size = s;
		myarray = new T[size];
	}
	void setArray(int elem, T val) 
	{
		myarray[elem] = val;
	}
	T & operator [](int index)
	{
		return myarray[index];
	}
};

#endif