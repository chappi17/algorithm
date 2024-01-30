#include <iostream>

using namespace std;

void BubbleSort(int array[], int size)
{
	for (int i = size - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}

int main()
{

	int myArray[] = { 6,4,2,5,1,3 };

	//4 바이트임 배열 하나 당. 그래서 전체 배열의 사이즈에서 하나의 배열 사이즈를 빼면 
	// 24 /4 = 6이 나올거임
	int size = sizeof(myArray) / sizeof(myArray[0]);

	BubbleSort(myArray, size);

	for (auto value : myArray)
	{
		cout << value << " ";
	}


	return 0;
}