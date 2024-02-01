#include <iostream>

using namespace std;

void Swap(int Arr[], int firstIndex, int secondIndex)
{
	int temp = Arr[firstIndex];
	Arr[firstIndex] = Arr[secondIndex];
	Arr[secondIndex] = temp;
}

int Pivot(int Arr[], int pivotIndex, int endIndex)
{
	int swapIndex = pivotIndex;
	for (int i = pivotIndex + 1; i <= endIndex; i++)
	{
		if (Arr[i] < Arr[pivotIndex])
		{
			swapIndex++;
			Swap(Arr, swapIndex, i);
		}
	}
	Swap(Arr, pivotIndex, swapIndex);
	return swapIndex;
}

void quickSort(int Arr[], int leftIndex, int rightIndex)
{
	if (leftIndex >= rightIndex) return;

	int pivotIndex = Pivot(Arr, leftIndex, rightIndex);
	quickSort(Arr, leftIndex, pivotIndex - 1);
	quickSort(Arr, pivotIndex+1, rightIndex);
}

int main()
{
	int myArr[] = { 4,6,1,7,3,2,5 };

	int size = sizeof(myArr) / sizeof(myArr[0]);


	quickSort(myArr, 0, size - 1);

//	int returnedIndex = Pivot(myArr, 0, size - 1);

//	cout << "Returned Index :" << returnedIndex << "\n";

	for (auto a : myArr)
	{
		cout << a << " ";
	}
}

















//
//// Swap �Լ�: �� ������ ��ġ�� �ٲ��ִ� �Լ��Դϴ�.
//void Swap(int* A, int* B)
//{
//	int Temp = *A; // A�� ���� �ӽ÷� ����
//	*A = *B;       // B�� ���� A�� ����
//	*B = Temp;     // �ӽ÷� ������ A�� ���� B�� ����
//}
//
//// Partition �Լ�: �־��� ������ �������� ���� ���� ����, ū ���� ���������� �����ϴ�.
//int Partition(int Dataset[], int Left, int Right)
//{
//	int First = Left; // ������ �� ���� ��ġ
//	int Pivot = Dataset[First]; // ���� ��
//
//	++Left; // ���� ���� �̹� Ȯ�������Ƿ� ���� ������ �̵�
//
//	while (Left <= Right)
//	{
//		while (Dataset[Left] <= Pivot && Left < Right) // ���� ������ ū �� ã�� ������ �̵�
//			++Left;
//		while (Dataset[Right] > Pivot && Left <= Right) // ���� ������ ���� �� ã�� ������ �̵�
//			--Right;
//
//		if (Left < Right)
//			Swap(&Dataset[Left], &Dataset[Right]); // ã�� ���� ���� �ٲ�
//		else
//			break; // ���ʰ� �������� �����ϸ� ���� ����
//	}
//
//	Swap(&Dataset[First], &Dataset[Right]); // ���� ���� �ùٸ� ��ġ�� �̵�
//
//	return Right; // ���� ���� ���� ��ġ ��ȯ
//}
//
//// QuickSort �Լ�: �־��� ������ ��������� �����մϴ�.
//void QuickSort(int Dataset[], int Left, int Right)
//{
//	if (Left < Right)
//	{
//		int Index = Partition(Dataset, Left, Right); // ���� ���� �������� ����
//
//		QuickSort(Dataset, Left, Index - 1); // ���� �κ� ����
//		QuickSort(Dataset, Index + 1, Right); // ������ �κ� ����
//	}
//}
//
//int main()
//{
//	int Dataset[] = { 6, 4, 2, 3, 1, 5 }; // ������ �迭
//	int Length = sizeof Dataset / sizeof Dataset[0]; // �迭�� ����
//
//	QuickSort(Dataset, 0, Length - 1); // �� ���� ����
//
//	// ��� ���
//	for (int i = 0; i < Length; i++)
//	{
//		cout << Dataset[i] << " ";
//	}
//
//	return 0;
//}