#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, max, index;
	max = 0;
	index = 0;
	int arr[10];

	for (int i = 1; i < 10; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	cout << max << endl;
	cout << index << endl;

	return 0;
}