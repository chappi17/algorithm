#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int total[5] = {};
	int score=0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i != j)
			{
				cin >> score;
				total[j] += score;
			}
		}
	}

	int winner = 0;
	int highest = total[0];  // �ְ� ������ ù ��° �������� ������ �ʱ�ȭ
	for (int i = 1; i < 5; i++)
	{
		if (total[i] > highest)  // ���� �������� ������ �ְ� �������� ������ �˻�
		{
			highest = total[i];
			winner = i;
		}
	}

	cout << winner << " " << highest << "\n";

	return 0;
}