#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 5;
	int arr[n]={ 3,5,8 };

	//arr[2] = 1024;
	//cout << arr[2] << endl;

	//���� ������� � ����������

	cout << "������� �������� �������: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	//����� ������� �� �����  � ������ �������
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//����� ������� �� ����� � �������� 

	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//���������� ����� ��������� �������

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum+=arr[i];
	}
	cout << "����� ��������� �������: " << sum << endl;

	// ������� �������������� ��������� �������

	int summ = 0;

	for (int i = 0; i < n; i++)
	{
		summ+=arr[i];

	}
	cout << "������� �������������� ��������� �������: " << summ / n << endl;

	// ����� ������������ � ����������� �������� �������

	
	int  max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max<arr[i])
		{
			max = arr[i];
			
		}
		cout << "������������ �������� �������: " << max << endl;
		
	 }
}
