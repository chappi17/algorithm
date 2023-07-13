#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
// 배열의 모든 숫자 출력
void print(const int data[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << endl;
	}
}


//  배열에 원하는 항목 검색
// 있으면 인덱스 반환, 없으면 -1 반환
// 동일한 값 있으면 처음 위치 인덱스 반환

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

// 최대값 반환
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


// 최소값 반환
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

//역순 출력
void reverse(const int data[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << size - (i) << endl;
	}
}
// 평균 출력

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


// 평균보다 큰 값 출력




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