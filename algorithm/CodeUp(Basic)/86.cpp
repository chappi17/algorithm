#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int n;
	cin >> n;
	const int boardsize = 19;
	int arr[boardsize][boardsize] = {0};

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		arr[x][y] =  1;
	}

	for (int i = 0; i < boardsize; i++)
	{
		for (int j = 0; j < boardsize; j++)
		{
			cout << arr[i][j] << " ";
		}
	cout << endl;
	}

}