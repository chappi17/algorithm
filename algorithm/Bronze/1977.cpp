#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool PerfectSqrt(int n)
{
	int sqrtN = static_cast<int>(sqrt(n));
	return sqrtN * sqrtN == n;
}

int main()
{
	vector<int> answer;
	int X = 0;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int M = 0;
	int N = 0;

	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (PerfectSqrt(i))
		{
			answer.emplace_back(i);
			X += i;
		}
	};

	if (!answer.empty())
	{
		cout << X << "\n";
		cout << answer[0] << "\n";
	}
	else
		cout << "-1" << "\n";
}