#include "Header.h"
double* Init(double * arr , int size)
{
	arr = new double[size];
	return arr;
}
void Fill(double *arr, int size)
{
	for (int i = 0 ; i < size ; i++)
	{
		arr[i] = rand() % 10;
	}
}
void Print (double *arr , int size)
{
	for (int i = 0 ; i < size ; i++)
	{
		cout << arr[i] << "|";
	}
}
void Clear(double * arr , int size)
{
	delete[] arr;
}