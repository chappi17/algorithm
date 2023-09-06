#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// 두 배열 값들 더해서 최댓값 비교

int main()
{
	int n[4], m[4];
	int r1 = 0, r2 = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> n[i];
		r1 += n[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cin >> m[i];
		r2 += m[i];
	}

	if (r1 > r2)
	{
		cout << r1 << "\n";
	}
	else
		cout << r2 << "\n";

	return 0;
}