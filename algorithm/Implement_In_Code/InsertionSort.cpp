#include <iostream>

using namespace std;

void InsertionSort(int arry[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int temp = arry[i];
		int j = i - 1;

		while (j > -1 &&  temp < arry[j])
		{
			arry[j + 1] = arry[j];
			arry[j] = temp;
			j--;
		}
	}
}


int main()
{
	int arry[] = { 5,2,3,4,6,1 };

	int size = sizeof(arry) / sizeof(arry[0]);

	InsertionSort(arry, size);

	for (auto value : arry)
	{
		cout << value << " ";
	}

	return 0;
}