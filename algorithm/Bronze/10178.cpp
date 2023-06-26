#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 케이스 갯수
// 사탕 갯수 c 형제의 수 v 입력받기

int main()
{
	int n,c,v,a,b;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> c >> v;
		a = c / v;
		b = c % v;
		cout << "You get " << a << " piece(s) and your dad gets " << b << " piece(s)." << "\n";
	}	
}