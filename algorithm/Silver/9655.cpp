#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// 돌게임
// 돌 N 개가 주어질때,
// 한턴당 1~3개씩 가져가는데,
// 마지막에 돌을 가져가는 사람이 이기는 게임
// 4로 나눠지는 수 만 아니면 항상 먼저 시작한 놈이 이김

int main()
{
	int N;
	cin >> N;

	if (N % 4 == 0 || N %4 == 2)
	{
		cout << "CY" << "\n";
	}
	else
		cout << "SK" << "\n";

	return 0;
}