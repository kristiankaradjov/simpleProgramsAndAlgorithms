#include <iostream>
using namespace std;
const int N = 5 ;
int main()
{
	cout << "Enter five numbers, to find their sum : " << endl;
	int ArrayTest[N] = {};int sum = 0;int digitCounter = 0;
	for(int i = 0 ; i<N ; i++)
	{
		do
		{
			cin>>ArrayTest[i];
			sum += ArrayTest[i];
		} while (ArrayTest[i]<=-10 && ArrayTest[i]>200);
	}
	cout<<"The sum is "<<sum<<endl;
	while(sum!=0)
	{
		sum /= 10;
		digitCounter++;
	}
	cout<<"The number of digits in the sum "<<digitCounter<<endl;
}