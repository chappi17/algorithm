#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string S;
	cin >> S;
	vector<string> a;

	for (int i = 0; i < S.size(); i++)
	{
		a.push_back(S.substr(i));
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < S.size(); i++)
	{
		cout << a[i] << "\n";
	}

	return 0;
}