#include <iostream>
using namespace std;
#define tab "\t"

void Fillrand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	int n = 10;
	int* arr = new int[n] {};
	Fillrand(arr, n);
	cout << "Исходный массив:" << tab;
	Print(arr, n);
	int even_n =0, odd_n =0 ;
       

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			even_n++;
		}

		else
		{
			odd_n++;
		}
    } 
		int* even = new int[even_n] {};
		int* odd = new int[odd_n] {};

		for (int i = 0,e_n =0,o_n = 0; i < n; i++)
		{
			if (arr[i] % 2 == 0)
			{
				even[e_n++]=arr[i];
			}

			else
			{
				odd[o_n++]=arr[i];
			}
		}


	
		cout << "Массив четных чисел:"<<tab; Print(even, even_n);
		cout << "Массив нечетных чисел:"<<tab; Print(odd, odd_n);
		


	delete[] arr,even,odd;
}


void Fillrand(int arr[], const int n)
{
	for (int i = 0; i < n;i++)
	{
		*(arr+i) = rand()%100; 
    }
}
void Print(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	cout << endl;
}
