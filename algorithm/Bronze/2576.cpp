#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// Ȧ�� �Ǻ�
// �Ǻ��� Ȧ������ ���ϰ�
// �ּڰ� ���ϱ�


int main()
{
	vector<int> x;
	int y, result=0;
	
	for (int i = 0; i < 7; i++)
	{
		cin >> y;
		if (y % 2 == 0)
		{
			continue;
		}
		else
		{
			x.emplace_back(y);
		}

	}

	for (int i = 0; i < x.size(); i++)
	{
		result += x[i];
	}

	if (x.empty())
	{
		cout << -1 << "\n";
	}
	else
	{
		cout << result << "\n";
		sort(x.begin(), x.end());
		cout << x[0] << "\n";
	}

	return 0;
}