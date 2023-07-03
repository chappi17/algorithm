#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 피보나치 수열 구하기
// 0과 1로 시작하고 그다음부터는 앞 두개의 수의 합
// n이 구해지고, n번째 피보나치 수열의 수 구하기

int main()
{
	int n;
	int y=0;
	vector<int> result;
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		if (i == 0 || i == 1)
		{
			result.emplace_back(i);
		}

		else if (i > 1)
		{
			y = result[i-2] + result[i-1];
			result.emplace_back(y);
		}
	}
	cout << result[n] << "\n";
	return 0;
}