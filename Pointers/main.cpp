#include<iostream>
using namespace std;

//#define pointers

void main()
{
	setlocale(LC_ALL, "");
#ifdef pointers
	int a = 2;
	int* pa = &a;
	cout << a << endl; // вывод значения переменной "а" на экран
	cout << &a << endl; // взятие адреса переменной "а" приямо при выводе
	cout << pa << endl; // вывод на экран адреса переменной "а" хранящегося в указателе "ра"
	cout << *pa << endl; // раиименование указателя "ра" и получение значения по адресу

	int* pb;
	int b = 3;
	*pb = &b;
	// int* - указател  на int  
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
