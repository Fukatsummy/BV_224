﻿#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	double a, b;
	char s;
	cout << "Введите арифметическое вырожение: ";
	cin >> a >> s >> b;
	switch(s)
	{
	case '+':cout << a << " + " << b << " = " << a + b << endl; break;
	case '-':cout << a << " - " << b << " = " << a - b << endl; break;
	case '*':cout << a << " * " << b << " = " << a * b << endl; break;
	case '/':cout << a << " / " << b << " = " << a / b << endl; break;
	default: cout << "Error" << endl;
	}


}