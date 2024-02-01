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
//// Swap 함수: 두 숫자의 위치를 바꿔주는 함수입니다.
//void Swap(int* A, int* B)
//{
//	int Temp = *A; // A의 값을 임시로 저장
//	*A = *B;       // B의 값을 A에 대입
//	*B = Temp;     // 임시로 저장한 A의 값을 B에 대입
//}
//
//// Partition 함수: 주어진 범위를 기준으로 작은 값은 왼쪽, 큰 값은 오른쪽으로 나눕니다.
//int Partition(int Dataset[], int Left, int Right)
//{
//	int First = Left; // 기준이 될 값의 위치
//	int Pivot = Dataset[First]; // 기준 값
//
//	++Left; // 기준 값은 이미 확인했으므로 다음 값으로 이동
//
//	while (Left <= Right)
//	{
//		while (Dataset[Left] <= Pivot && Left < Right) // 기준 값보다 큰 값 찾을 때까지 이동
//			++Left;
//		while (Dataset[Right] > Pivot && Left <= Right) // 기준 값보다 작은 값 찾을 때까지 이동
//			--Right;
//
//		if (Left < Right)
//			Swap(&Dataset[Left], &Dataset[Right]); // 찾은 값을 서로 바꿈
//		else
//			break; // 왼쪽과 오른쪽이 교차하면 루프 종료
//	}
//
//	Swap(&Dataset[First], &Dataset[Right]); // 기준 값을 올바른 위치로 이동
//
//	return Right; // 기준 값의 최종 위치 반환
//}
//
//// QuickSort 함수: 주어진 범위를 재귀적으로 정렬합니다.
//void QuickSort(int Dataset[], int Left, int Right)
//{
//	if (Left < Right)
//	{
//		int Index = Partition(Dataset, Left, Right); // 기준 값을 기준으로 분할
//
//		QuickSort(Dataset, Left, Index - 1); // 왼쪽 부분 정렬
//		QuickSort(Dataset, Index + 1, Right); // 오른쪽 부분 정렬
//	}
//}
//
//int main()
//{
//	int Dataset[] = { 6, 4, 2, 3, 1, 5 }; // 정렬할 배열
//	int Length = sizeof Dataset / sizeof Dataset[0]; // 배열의 길이
//
//	QuickSort(Dataset, 0, Length - 1); // 퀵 정렬 실행
//
//	// 결과 출력
//	for (int i = 0; i < Length; i++)
//	{
//		cout << Dataset[i] << " ";
//	}
//
//	return 0;
//}