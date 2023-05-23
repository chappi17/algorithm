#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int a,m,d,n;
	int result;
	cin >> a >> m >> d >> n;

	for (int i = a; i < n; i++)
	{
		result = (i * m) + d;
		cout << result << " ";
	}
}