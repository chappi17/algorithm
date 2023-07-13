#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	int arr[101] = { 0 };

	int I, J, K;
	for (int i = 1; i <= M; i++)
	{
		cin >> I >> J >> K;
		for (I; I <= J; I++)
		{
			arr[I] = K;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		cout << arr[i] << " ";
	}


	return 0;

}