#include <string>
#include <cstring>
#include <iostream>

using namespace std;

unsigned countChar(string txt , char c);

int main(){
	string text;
	char * textC = new char[1000];
	char chr;
	cout << "Enter text: ";
	getline(cin, text);

	cout << "Enter a char: ";
	cin >> chr;
	cout << "Number of found chars is: ";
	cout << countChar(text, chr) << endl;
}
unsigned countChar(string txt, char c)
{
	unsigned cnt = 0;
	unsigned length = txt.length();
	for (unsigned i = 0; i < length; i++)
	{
		if (txt[i] == c)
		{ 
			cnt++; 
		};
	}
	return cnt;
}

