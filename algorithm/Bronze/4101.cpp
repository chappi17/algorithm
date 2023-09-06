#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// while 문 반복하고, 0,0 입력 나올때 탈출
// 테스트 케이스 숫자 2개씩 받음
// 입력 마지막 줄에는 0 0 받고, 프로그램 끝남 


int main()
{

	while (true)
	{
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0)
		{
			break;
		}
		if (x > y)
		{
			cout << "Yes" << "\n";
		}
		else
			cout << "No" << "\n";
	}


	return 0;
}