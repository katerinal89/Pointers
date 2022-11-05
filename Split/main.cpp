#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, " ");
	int n;
	int even[n];
	int odd[n];
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];
	
	FillRand(arr, n);
	Print(arr, n);

	for (int i = 0; i < n; i++)
	{

		if (arr[i] % 2 == 0)
		{
			even[n] = arr[i];
			cout << "Четные элементы: " << even[n] << endl;
		}
	}
	for (int j = 0; j < n; j++)
	{

		if (arr[j] % 2 != 0)
		{
			odd[n] = arr[j];
			cout << "Нечетные элементы: " << odd[n] << endl;
		}

	}

	delete[]arr;

}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	
}
