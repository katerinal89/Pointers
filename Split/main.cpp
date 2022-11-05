#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n]{ 1,2,3,4,5,6,7,8,9,10 };
	int even[n]{};
	int odd[n]{};


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

}