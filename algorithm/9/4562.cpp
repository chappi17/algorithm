#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 데이터 입력받는 세트 횟수 입력 받기
// 정수 2개 입력받기  x,y
// x는 좀비가 먹은 뇌 갯수, y는 좀비가 먹어야 생존하는 뇌 갯수 
//x가 y보다 작으면 "No BRAINS"  출력, y랑 같거나 y보다 크면 "MMM BRAINS" 출력 

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		if (x < y)
		{
			cout << "NO BRAINS" << "\n";
		}
		else
			cout << "MMM BRAINS" << "\n";
	}

	return 0;
}