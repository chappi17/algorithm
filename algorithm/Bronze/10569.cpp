#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
// 테스트 케이트 입력 받음
// 꼭짓점 갯수, 모서리의 갯수
// 꼿짓점 갯수 - 모서리수 + 면의 수 = 2
// 면의 갯수 출력하기 

int main()
{
	int n, a, b, c;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		c = 2 - (a - b);
		cout << c << "\n";
	}
	return 0;
}