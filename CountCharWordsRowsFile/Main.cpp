#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <cassert>
using namespace std;

void count(ifstream &f)
{
	int countChar = 0, countWord = 0, countRow = 0;
	string charCount;
	string wordCount;

	while (f >> wordCount)
	{
		countWord++;
	}
	cout << " Words : " << countWord << endl;
	f.clear();
	f.seekg(ios::beg);
	while (getline(f, charCount))
	{
		countChar += charCount.length();
		countRow++;
	}
	
	cout << "Characters: " << countChar << endl;
	cout << "Rows : " << countRow << endl;
}
int main(){

	string nameOfFile;
	cout << "Please enter the name of the file you want to open(to see how many characters, words and sentences, rows are there)" << endl;
	cin >> nameOfFile;
	ifstream file(nameOfFile);
	assert(file.is_open());
	count(file);
	file.close();
	return 0;
}