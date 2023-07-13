#include<iostream>
using namespace std;
int main()
{
	int n,v,answer;
	cin >> n;
	answer = 0;
	int a[100];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> v;
	for (int i = 0; i < n; i++)
	{
		if (v == a[i])
			answer++;
	}
	cout << answer << "\n";

	return 0;


}