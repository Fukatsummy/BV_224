#include<iostream>
using namespace std;

void Exchange(int& a, int& b);

void main()
{
	setlocale(LC_ALL, "");

	/*const int n = 5;
	short arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + 1) << "\t";
	}
	cout << endl;*/
	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	Exchange(a, b);
	cout << a << "\t" <<b << endl;

}
void Exchange(int& a, int& b)
{
	int buffer = a;
	a = b;
	b = buffer;
}