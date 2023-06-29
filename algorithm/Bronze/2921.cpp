#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 도미노의 세트 
// 규칙 찾기
// 크기가 N 인거에서 1~N 까지 더한 숫자에 N 곱하면 됨

int main()
{
	int N;
	int x = 0;
	cin >> N;

	for (int i = 1; i <= N+1; i++)
	{
		x += i;
	}

	cout << N * x << "\n";

	return 0;
}