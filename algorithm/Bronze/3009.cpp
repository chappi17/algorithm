#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// 네번째 점 
int main()
{
	int x[3];
	int y[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> x[i] >> y[i];
	}

	if (x[0] == x[1])
	{
		cout << x[2] << endl;
	}
	else if (x[0] == x[2])
	{
		cout << x[1] << endl;
	}
	else
		cout << x[0] << endl;

	if (y[0] == y[1])
	{
		cout << y[2] << endl;
	}
	else if (y[0] == y[2])
	{
		cout << y[1] << endl;
	}
	else
		cout << y[0] << endl;

	return 0;
}