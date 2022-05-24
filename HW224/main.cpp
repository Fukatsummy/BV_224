#include<iostream>
#include<conio.h>
using namespace std;
using std::cout;
#define Escape 27
//#define PALINDROME

void main()
{
	setlocale(LC_ALL, "");
#ifdef PALINDROM
	int number;//число веденое с клавиатуры
	int reverse = 0;//число записаное наоборот
	cout << "Введите число: "; cin >> number;
	int buffer = number; //создаем копию введенного числа, чтоб не изменялся исходник 
	while (buffer)
	{
		reverse *= 10;//особождаем младший разряд для сохранения следующей цифры
		reverse += buffer % 10;
		buffer /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Число - Палиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}
#endif // PALINDROM

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		if (key == 'w'||key =='W')cout << "Вперед" << endl;
		else if (key == 's')cout << "Назад" << endl;
		else if (key == 'a')cout << "Влево" << endl;
		else if (key == 13)cout << "FIRE" << endl;
	} while (key!=Escape);
}