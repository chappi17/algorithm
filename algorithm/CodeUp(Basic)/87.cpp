#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
	int a,m,d,n;
	cin >> a >> m >> d >> n;
	long long int result= a;
	for (int i = 1; i < n; i++)
	{
		result = result * m + d;
	}
		cout << result << " ";
	
}