#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 카드 갯수 입력받기

int main()
{
	int n = 0;
	int m = 0;
	vector<int> a;
	vector<int> b;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int temp = 0;
		cin >> temp;
		a.emplace_back(temp);
	}

	for (int i = 0; i < a.size(); ++i) 
	{
		for (int j = i + 1; j < a.size(); ++j) 
		{
			for (int k = j + 1; k < a.size(); ++k) 
			{
				int sum = a[i] + a[j] + a[k];
				if (sum <= m) 
				{
					b.emplace_back(sum);
				}
			}
		}
	}

	sort(b.rbegin(), b.rend());
	cout << b[0] << "\n";
	
}