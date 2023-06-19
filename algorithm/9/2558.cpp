#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 입력 받는 변수 x
// for문으로 반복해서 출력하는데, 입력받은 변수부터 출력해서 
// 하나씩 뺴면서 출력 

int main()
{
	int x;
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cout << x - i << "\n";
	}
	return 0;
}