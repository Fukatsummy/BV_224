#include<iostream>
using namespace std;

//#define FACTORIAL
//#define POW
//#define ASCII
void main()
{
	setlocale(LC_ALL, "");

	///*for (;;)
	//{
	//	cout << "Hello ";
	//}*/
	//int n;
	//cout << "Введите количество итераций: "; cin >> n;
	//for (int i = 0; i < n; i++)
	//{
	//	cout << i<< "\t";
	//}
	//cout << endl;

#ifdef FACTORIAL
	int n;
	cout << "Введите число для вычисления факториала: " << endl;
	cin >> n;
	double  factorial = 1;
	for (int i = 1; i <= n; i++)
	{
		//cout << i << "!=";
		factorial *= i;
		//cout << factorial << endl;
	}
	cout << n << "!=" << factorial << endl;
	cout << endl;
#endif // FACTORIAL

#ifdef POW
	double a; //osnovanie
	int n; //pocazateli
	double N = 1; //sama stepeni
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a; //оправляем основание в знаменатель
		n = -n; //меняем знак показателя на противоположный
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // POW

	cout << "Таблица ASCII-символов:\t";
	setlocale(LC_ALL, "C");
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;

}