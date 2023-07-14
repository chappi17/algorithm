#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

int main()
{
	int p, m, n;
	cin >> p >> m;
	int party = 0;
	int result = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		party = p * m;
		result = party - n;
		cout << -result << " ";
	}

	return 0;
}