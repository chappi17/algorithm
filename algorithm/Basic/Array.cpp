#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
// �迭�� ��� ���� ���
void print(const int data[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << endl;
	}
}


//  �迭�� ���ϴ� �׸� �˻�
// ������ �ε��� ��ȯ, ������ -1 ��ȯ
// ������ �� ������ ó�� ��ġ �ε��� ��ȯ

int found(const int data[], int size , int num)
{
	for (int i = 1; i <= size; i++)
	{
		if (i == num)
		{
			cout << i << endl;
			return i;
		}
	}
			return -1;
}

// �ִ밪 ��ȯ
int max(const int data[], int size)
{
	int maxed = data[0];
	for (int i = 0; i < size; i++)
	{
		if (data[i] > maxed)
		{
			maxed = data[i];
		}
	}
	return maxed;
}


// �ּҰ� ��ȯ
int min(const int data[], int size)
{
	int mined = data[0];
	for (int i = 0; i < size; i++)
	{
		if (data[i] < mined)
		{
			mined = data[i];
		}
	}
	return mined;
}

//���� ���
void reverse(const int data[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << size - (i) << endl;
	}
}
// ��� ���

int average(const int data[], int size)
{
	int num = 0;
	int ave = 0;
	for (int i = 0; i < size; i++)
	{
		num += data[i];
	}
	ave = num / size;
	cout << ave << endl;
	return ave;
}


// ��պ��� ū �� ���




int main()
{
	int data[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int data2[10] = { 10,9,8,7,5,4,3,2,1,12 };

	print(data, 10);
	found(data, 10, 5);
	max(data, 10);
	min(data2, 10);
	reverse(data, 10);
	average(data, 10);
	return 0;
}