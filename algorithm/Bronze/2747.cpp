#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// �Ǻ���ġ ���� ���ϱ�
// 0�� 1�� �����ϰ� �״������ʹ� �� �ΰ��� ���� ��
// n�� ��������, n��° �Ǻ���ġ ������ �� ���ϱ�

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