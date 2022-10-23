#include<iostream>
using namespace std;

void Exchande(int& a, int& b);

void main()
{
	setlocale(LC_ALL, "");
	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	Exchande(a, b);
	cout << a << "\t" << b << endl;

}

void Exchande(int& a, int& b)
{
	int buffer = a;
	a = b;
	b = buffer;
}