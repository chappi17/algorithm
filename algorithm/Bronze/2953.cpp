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


				total[i] += score;
			}
		}
	}

	int winner = 0;
	int highest = 0;  // 최고 점수를 첫 번째 참가자의 점수로 초기화
	for (int i = 0; i < 5; i++)
	{
		if (total[i] > highest)  // 현재 참가자의 점수가 최고 점수보다 높은지 검사
		{
			highest = total[i];
			winner = i;
		}
	}

	cout << winner+1 << " " << highest << "\n";

	return 0;
}