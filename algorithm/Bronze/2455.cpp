#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 사람 수가 가장 많을때 계산하는거 
// 내린 사람과 탄 사람의 변수를 구분해서 받기


int main()
{
	int down = 0;
	int up = 0;
	int result=0;
	int top = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> down;
		cin >> up;

		result -= down;
		result += up;
		if (result > top)
		{
			top = result;
		}
	}
	cout << top << "\n";
	return 0;
}