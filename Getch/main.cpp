#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*int i = 0;  //Счетчик цикла
	int n;      //Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (i < n)
	{
		cout << " Hello World\n";
		i++;

	}*/

	/*int n;  //количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	while (n--)
	{
		cout << n << " Hello World\n";
	}*/

	char key;  //Это переменная будет хранить клавиши
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key!= 27);
}