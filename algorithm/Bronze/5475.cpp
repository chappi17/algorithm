#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int a;
	int sum=0;

	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		sum += pow(a, 2);
	}

	cout << sum % 10 << "\n";
}