#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
// 테스트 케이스 받기 

int main()
{
	int n;
	cin >> n;

	string cases;
	string a = {};
	int b = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> cases;
		a = cases.substr(0, 3);
		b = stoi(cases.substr(4, 4));
		int convert = 0;
		for (int i = 0; i < 3; i++)
		{
			convert += (a[i] - 'A') * pow(26, 2 - i);
		}
		if (abs(convert - b) <= 100)
		{
			cout << "nice" << "\n";
		}
		else
			cout << "not nice" << "\n";
	}
	return 0;
}