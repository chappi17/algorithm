#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
// 숫자 2개가 주어지고, 이는 범위를 뜻함
// M,N 이면 
// M 부터 N 까지의 숫자를 소수 판별하기 
// 소수를 모두 찾고, 다 더한값을 출력 + 다음줄에는 최소값을 출력
// 만약 소수가 없을 경우는 -1 출력 


bool Sosu(int num)
{
	if (num < 2)
	{
		return false;
	}

	if (num == 2)
	{
		return true;
	}

	if (num % 2 == 0)
	{
		return false;
	}

	for (int i = 3; i <= sqrt(num); i += 2)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}


int main()
{
	int M, N;
	int x = 0;
	cin >> M >> N;

	vector<int> a;
	for (int i = M; i <= N; i++)
	{
		if (Sosu(i) == true)
		{
			a.push_back(i);
		}
		else
			continue;
	}

	for (int i = 0; i < a.size(); i++)
	{
		x += a[i];
	}
	if (x != 0)
	{
		cout << x << "\n";
	}
	sort(a.begin(), a.end());

	if (!a.empty())
	{
		cout << a[0];
	}
	else
	{
		cout << -1 << "\n";
	}

	return 0;
}