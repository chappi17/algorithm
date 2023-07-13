#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	int X[31];
	int n;

	for (int i = 1; i <= 28; i++)
	{
		cin >> n;
		X[n] = 1;
	}

	for (int i = 1; i <= 28; i++)
	{
		if (X[i] == 0)
			cout << i << "\n";
	}
	return 0;

	/*int X[31];
	int Y=0;
	int M1 = 0;
	int M2 = 0;
	
	for (int i = 1; i <= 30; i++)
	{
		X[i] = i;
	}

	for (int i = 1; i <= 28; i++)
	{
		cin >> Y;
		X[Y] = 0;
	}

	for (int i = 1; i <= 30; i++)
	{
		if (X[i] > 0)
		{
			if (M1 != 0)
			{
				M2 = X[i];
			}
			else
			{
				M1 = X[i];
			}
		}
	}

	if (M1 > M2)
	{
		cout << M2 << "\n";
		cout << M1 << "\n";
	}
	else
	{
		cout << M1 << "\n";
		cout << M2 << "\n";
	}
	return 0;*/
}