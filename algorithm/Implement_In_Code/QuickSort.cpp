#include <iostream>

using namespace std;

// Swap �Լ�: �� ������ ��ġ�� �ٲ��ִ� �Լ��Դϴ�.
void Swap(int* A, int* B)
{
	int Temp = *A; // A�� ���� �ӽ÷� ����
	*A = *B;       // B�� ���� A�� ����
	*B = Temp;     // �ӽ÷� ������ A�� ���� B�� ����
}

// Partition �Լ�: �־��� ������ �������� ���� ���� ����, ū ���� ���������� �����ϴ�.
int Partition(int Dataset[], int Left, int Right)
{
	int First = Left; // ������ �� ���� ��ġ
	int Pivot = Dataset[First]; // ���� ��

	++Left; // ���� ���� �̹� Ȯ�������Ƿ� ���� ������ �̵�

	while (Left <= Right)
	{
		while (Dataset[Left] <= Pivot && Left < Right) // ���� ������ ū �� ã�� ������ �̵�
			++Left;
		while (Dataset[Right] > Pivot && Left <= Right) // ���� ������ ���� �� ã�� ������ �̵�
			--Right;

		if (Left < Right)
			Swap(&Dataset[Left], &Dataset[Right]); // ã�� ���� ���� �ٲ�
		else
			break; // ���ʰ� �������� �����ϸ� ���� ����
	}

	Swap(&Dataset[First], &Dataset[Right]); // ���� ���� �ùٸ� ��ġ�� �̵�

	return Right; // ���� ���� ���� ��ġ ��ȯ
}

// QuickSort �Լ�: �־��� ������ ��������� �����մϴ�.
void QuickSort(int Dataset[], int Left, int Right)
{
	if (Left < Right)
	{
		int Index = Partition(Dataset, Left, Right); // ���� ���� �������� ����

		QuickSort(Dataset, Left, Index - 1); // ���� �κ� ����
		QuickSort(Dataset, Index + 1, Right); // ������ �κ� ����
	}
}

int main()
{
	int Dataset[] = { 6, 4, 2, 3, 1, 5 }; // ������ �迭
	int Length = sizeof Dataset / sizeof Dataset[0]; // �迭�� ����

	QuickSort(Dataset, 0, Length - 1); // �� ���� ����

	// ��� ���
	for (int i = 0; i < Length; i++)
	{
		cout << Dataset[i] << " ";
	}

	return 0;
}