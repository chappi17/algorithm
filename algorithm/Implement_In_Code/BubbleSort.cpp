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

	//4 ����Ʈ�� �迭 �ϳ� ��. �׷��� ��ü �迭�� ������� �ϳ��� �迭 ����� ���� 
	// 24 /4 = 6�� ���ð���
	int size = sizeof(myArray) / sizeof(myArray[0]);

	BubbleSort(myArray, size);

	for (auto value : myArray)
	{
		cout << value << " ";
	}


	return 0;
}