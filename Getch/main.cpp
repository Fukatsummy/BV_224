#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	/*int i = 0;  //������� �����
	int n;      //���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << " Hello World\n";
		i++;

	}*/

	/*int n;  //���������� ��������
	cout << "������� ���������� ��������: "; cin >> n;
	while (n--)
	{
		cout << n << " Hello World\n";
	}*/

	char key;  //��� ���������� ����� ������� �������
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
	} while (key!= 27);
}