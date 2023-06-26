#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 케이스 갯수 
// 자동차 가격 s

int main()
{
	int x,s,n,p,q,y;
	y = 0;
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cin >> s >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> p >> q;
			y += p * q;
		}
		cout << s + (y) << "\n";
		y = 0;
	}

	
	
	return 0;
}