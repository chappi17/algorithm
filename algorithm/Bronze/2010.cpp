#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 멀티탭의 갯수 n
// 몇개의 플러그를 꽂을 수 있는지 나타내는 자연수
// 한개를 꽂으면 플러그 수 1개가 줄어듦
int main()
{
	int n,x,y;
	y = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		y += x;
	}
	cout << y- (n-1) << "\n";


	return 0;
}