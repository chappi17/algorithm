#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// �ڿ��� N K 
// N % K = 0 �̸� ����� ������ �� ã�� 

int main()
{
	int N,K;
	vector<int> z;
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			z.emplace_back(i);
		}
	}

	for (int i = 0; i <= 1; i++)
	{
		if (z.size() < K)
		{
			cout << 0 << "\n";
			break;
		}
			cout << z[K - 1] << "\n";
			break;
	}

	return 0;
}