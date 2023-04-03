#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> m >> n;
	
	int a[100][100] = { 0 };
	int b[100][100] = { 0 };

	// 1번 행렬
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
	// 2번 행렬
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> b[i][j];
	}

	// 1 + 2
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] + b[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}