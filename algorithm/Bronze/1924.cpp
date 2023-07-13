#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// 요일을 결정하는 월과 일을 입력받아야 함 
// 1월 1일이 월요일임으로 월요일은 0, 화요일은 1
// 참조하는 요일을 정함 
// ㅇ


int main()
{
	int m, d;
	cin >> m >> d;

	int referenceday = 0; // 월요일 

	int daysFromreference = 0;

	for (int i = 1; i < m; i++)
	{
		if (m == 2)
		{
			daysFromreference += 28;
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			daysFromreference += 30;
		}
		else
			daysFromreference += 31;


	}
}