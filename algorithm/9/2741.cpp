#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 출력을 원하는 만큼의 숫자 변수 x 를 입력 받음 
// 입력을 받고, 입력받은 만큼 for문으로 반복
// 반복할때, 출력을 하는데, 1~ 입력 받은 숫자 만큼

int main()
{
	int x;
	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		cout << i << "\n";
	}

	return 0;
}