#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define TASK_1
#define TASK_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int t;
	cout << "������� ����������� �������: "; cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����" << endl;
	}
	else if (t < 0)
	{
		cout << "�� ����� �������" << endl;
	}
	else
	{
		cout << "�� ����� 0" << endl;
	}
#endif // TASK_1

#ifdef TASK_2
	double a, b;// �����
	char s; //���� ��������
	cout << "������� �������������� ���������: ";
	cin >> a >> s >> b;
	//cout << a << s << b << endl;
	if (s == '+')
	{
		cout << a << " + " << b << " = " << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << " - " << b << " = " << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << " * " << b << " = " << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << " / " << b << " = " << a / b << endl;
	}
	else
	{
		cout << "Error: no operation" << endl;
	}
#endif // TASK_2



}