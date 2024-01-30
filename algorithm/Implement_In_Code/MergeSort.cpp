#include <iostream>
#include <array>

using namespace std;

void Merge(int arry[], int leftIndex, int midIndex, int rightIndex)
{
	// measure the size of left arry[]
	int leftArraySize = midIndex - leftIndex + 1;
	// measure the size of right arry[]
	int rightArraySize = rightIndex - midIndex;

	// 크기가 컴파일하는 시간에 크기가 결정됨 
	//int leftArray[leftArraySize];
	//int rightArray[rightArraySize];

	// 힙 메모리에 동적 배열을 할당함. 그래서 delete도 해줘야함
	int* leftArray = new int[leftArraySize];
	int* rightArray = new int[rightArraySize];


	for (int i = 0; i < leftArraySize; i++)
	{
		leftArray[i] = arry[leftIndex + i];
	}
	for (int j = 0; j < rightArraySize; j++)
	{
		rightArray[j] = arry[midIndex + j+1];
	}

	int index = leftIndex;
	int i = 0;
	int j = 0;
	while (i < leftArraySize && j < rightArraySize)
	{
		if (leftArray[i] <= rightArray[j])
		{
			arry[index] = leftArray[i];
			index++;
			i++;
		}
		else
		{
			arry[index] = rightArray[j];
			index++;
			j++;
		}

	}

	while (i < leftArraySize)
	{
		arry[index] = leftArray[i];
		index++;
		i++;
	}

	while (j < rightArraySize)
	{
		arry[index] = rightArray[j];
		index++;
		j++;
	}
	delete[] leftArray;
	delete[] rightArray;
}

void mergeSort(int arry[], int leftIndex, int rightIndex)
{
	if (leftIndex >= rightIndex) return;

	int midIndex = leftIndex + (rightIndex - leftIndex) / 2;
	mergeSort(arry, leftIndex, midIndex);
	mergeSort(arry, midIndex + 1, rightIndex);
	Merge(arry, leftIndex, midIndex, rightIndex);
}


int main()
{ 
	//int Dataset[] = { 1,3,7,8,2,4,5,6 };
	//int size = sizeof(Dataset) / sizeof(Dataset[0]);
	//int leftIndex = 0;
	//int rightIndex = size - 1;
	//int midIndex = (size / 2) - 1;

	//Merge(Dataset, leftIndex, midIndex, rightIndex);

	int myarr[] = { 3,1,4,2 };

	int size = sizeof(myarr) / sizeof(myarr[0]);
	int leftIndex = 0;
	int rightIndex = size - 1;

	mergeSort(myarr, leftIndex, rightIndex);


	for (auto a : myarr)
	{
		cout << a << " ";
	}


	return 0;
}