#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 5;
	int arr[n]={ 3,5,8 };

	//arr[2] = 1024;
	//cout << arr[2] << endl;

	//ввод массива с клавиатуры

	cout << "введите элементы массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	//вывод массива на экран  в прямом порядке
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//вывод массива на экран в обратном 

	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//вычисление суммы элементов массива

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum+=arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;

	// среднее арифметическое элементов массива

	int summ = 0;

	for (int i = 0; i < n; i++)
	{
		summ+=arr[i];

	}
	cout << "Среднее арифметическое элементов массива: " << summ / n << endl;

	// найти максимальное и минимальное значение массива

	
	int  max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max<arr[i])
		{
			max = arr[i];
			
		}
		cout << "Максимальное значение массива: " << max << endl;
		
	 }
}
