#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int x,y;
	vector<int> z;
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cin >> y;
		z.emplace_back(y);
	}
	sort(z.begin(), z.end());

	for (int i = 0; i < z.size(); i++)
	{
		cout << z[0] << " ";
		break;
	}
}