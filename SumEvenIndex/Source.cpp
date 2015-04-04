#include <iostream>
using namespace std;
const int N = 6;
int main()
{
	cout << "Enter six numbers " << endl;
	int ArrayEven [N] = {};int sumEven = 0;
	for (int i = 0; i < N; i++ )
	{
		do
		{
			 cin>>ArrayEven[i];
		} while (ArrayEven[i] < 0 && ArrayEven[i] > 2000);
	}
	for (int j = 0; j < N; j += 2)
	{
		sumEven += ArrayEven[j];
	}
	cout << "Sum of the numbers in even position is : " << endl;
	cout<<sumEven<<endl;

}