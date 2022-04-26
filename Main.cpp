#include "Header.h"
using namespace std;
int main ()
{
	double* arr = 0;
	int size;
	cout << " Enter array size : " << endl;
	cin >> size;
	arr = Init(arr, size);
	Fill(arr, size);
	Print(arr, size);
	Clear(arr, size);
}