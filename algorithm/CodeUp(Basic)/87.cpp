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
//	cout << a << " ";
	for (int i = a; i < n; i++)
	{
		a = a * m + d;
	}
	cout << a << " ";
}