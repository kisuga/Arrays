#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	const int m = 10;
	int array[m] = {0,1,2,3,4,5,6,7,8,9 };

	cout << "¬ведите элементы массива: ";

	for (int i = 0; i < m; i++)
	{
		cin >> array[i];
	}


	for (int i = 1; i < m ; i++)
	{
		cout << array[i+1] << "\t";
		
	}
}