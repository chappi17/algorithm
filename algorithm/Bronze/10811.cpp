#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n,m;
	vector <int> v;
	long long a=0 ,b=0;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		reverse(v.begin() + (a-1), v.begin() + b);

	}
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
}