#include <iostream>

using namespace std;

void InsertSort(int Dataset[], int Length)
{
	int i = 0; 
	int j = 0;
	int value = 0;

	for (i = 1; i < Length; i++)
	{
		if (Dataset[i - 1] <= Dataset[i])
			continue;

		value = Dataset[i];

		for (j = 0; j < i; j++)
		{
			if (Dataset[j] > value)
			{
				memmove(&Dataset[j + 1], &Dataset[j], sizeof(Dataset[0]) * (i - j));
				Dataset[j] = value;
				break;
			}
		}
	}
}

int main()
{
	int Dataset[] = { 6,4,2,3,1,5 };
	int Length = sizeof Dataset / sizeof Dataset[0];
	int i = 0; 

	InsertSort(Dataset, Length);

	for (int i = 0; i < Length; i++)
	{
		cout << Dataset[i] << " ";
	}
	return 0;
}