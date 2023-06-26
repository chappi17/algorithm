#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 테스트 케이스 t
// 두번 던져 나온 두수 출력 

int main()
{
	int t, x, y;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> x >> y;
		cout << "Case " << i + 1 << ": " << x + y << "\n";
	}
	return 0;
}