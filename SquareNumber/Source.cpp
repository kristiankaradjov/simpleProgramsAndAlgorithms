#include <iostream>
#include <cmath>

using namespace std;
int numberPower(int a,int &b)
{
	a = pow(a,2);int temp = a;
	while(a != 0)
	{
		a /= 10;
		b++;
	}	
	return temp;
}
int main()
{
	int number;int counter = 0;int sum = 1;
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		sum += pow(sum,i);
	}
	cout<<"Power of the number: "<<numberPower(number,counter)<<endl;
	cout<<"Number of digits: "<<counter<<endl;
}