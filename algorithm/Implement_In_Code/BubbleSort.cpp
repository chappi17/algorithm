#include <iostream>

using namespace std;

void Bubblesort_temp(int Dataset[], int Length)
{
	int i = 0;
	int j = 0;
	int temp = 0;

	for (i = 0; i < Length - 1; i++)
	{
		for (j = 0; j < Length - (i + 1); j++)
		{
			if (Dataset[j] > Dataset[j + 1])
			{
				temp = Dataset[j + 1];
				Dataset[j + 1] = Dataset[j];
				Dataset[j] = temp;
			}
		}
	}
}

int main()
{
	int Dataset[] = { 6,2,5,7,10,20 };
	int Length = sizeof Dataset / sizeof Dataset[0];
	int i = 0;
	Bubblesort_temp(Dataset, Length);
	

	for (int i = 0; i < Length; i++)
	{
		cout << Dataset[i] << endl;
	}
	return 0;
}