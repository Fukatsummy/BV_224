#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	 
	/*int i = 3;
	i = ++i + ++i;
	cout << i << endl;*/

	/*int i = 3; 
	i = ++i + 1 + ++i * 2;
	cout << i << endl;*/

	int i = 3;
	i = ++i + 1 + (++i *= 2);
	cout << i << endl;
}