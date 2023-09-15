#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int>b(n, 0);

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		b[i] = a;
	}

	sort(b.begin(), b.end());

	for (int i = 0; i < b.size(); i++)
	{
		cout << b[i] << "\n";
	}

}