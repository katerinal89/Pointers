#include<iostream>
using namespace std;

//#define pointers

void main()
{
	setlocale(LC_ALL, "");
#ifdef pointers
	int a = 2;
	int* pa = &a;
	cout << a << endl; // ����� �������� ���������� "�" �� �����
	cout << &a << endl; // ������ ������ ���������� "�" ������ ��� ������
	cout << pa << endl; // ����� �� ����� ������ ���������� "�" ����������� � ��������� "��"
	cout << *pa << endl; // ������������� ��������� "��" � ��������� �������� �� ������

	int* pb;
	int b = 3;
	*pb = &b;
	// int* - ��������  �� int  
#endif // pointers
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout <<* (arr + i) << "\t";
	}
}
