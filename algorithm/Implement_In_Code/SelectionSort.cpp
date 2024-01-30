#include <iostream>

using namespace std;

void SelectionSort(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int minIndex = i;
		for (int j = i+1; j < size; j++)
		{
			if (array[j] < array[minIndex])
			{
				minIndex = j;
			}
		}
		if (i != minIndex)
		{
			int temp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = temp;
		}
	}
}

int main()
{
	int arry[] = { 5,3,6,1,2,4 };

	int size = sizeof(arry) /sizeof(arry[0]);

	SelectionSort(arry, size);

	for (auto value : arry)
	{
		cout << value << " ";
	}

	return 0;
}