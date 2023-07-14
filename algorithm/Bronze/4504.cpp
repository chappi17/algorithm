#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int n = 0;
	cin >> n;
	int v=0;
	while (cin >> v)
	{
		if (v == 0)
		{
			break;
		}
		if (v % n != 0)
		{
			cout << v << " is NOT a multiple of " << n <<"." << "\n";
		}
		else
			cout << v << " is a multiple of " << n << "." << "\n";

	}
	return 0;
}