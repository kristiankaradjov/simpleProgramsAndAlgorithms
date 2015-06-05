#include "Array.h"
#include <iostream>

using namespace std;

int main()
{
	array< int > int_array(10);
	int_array.setArray(0, 3);
	int_array.setArray(1, 55);
	cout << "Zero index :" << int_array[0] << endl;
	cout << "First index :" << int_array[1] << endl; 
	return 0;
}