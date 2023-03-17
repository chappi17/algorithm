#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, temp;
	temp = 0;

	cin >> N >> M;

	int arr[101];
	for (int i = 1; i <= 100; i++)
	{
		arr[i] = i;
	}

	for (int i = 1; i <= M; i++)
	{
		int I, J;
		cin >> I >> J ;
		for (int k=0 ; k <= 0; k++)
		{
			temp = arr[I];
			arr[I] = arr[J];
			arr[J] = temp;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}