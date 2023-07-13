#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int A;					// 내가 입력한 수 
	int a[42] = { 0 };		// 1~42 까지 나누면 41 까지 케이스가 있음
	int result = 0;			// 그래서 배열 1~41까지 만들고

	for (int i = 0; i < 10; i++)
	{
		cin >> A;				// 수를 입력 받음 
		a[A % 42]++;			// 입력받은 수를 배열 0~41에 입력
	}							// 만약 중복된 수 나오면 ++ 로  같은 곳에 추가됨 
								// 그러면 0이 아닌 곳을 카운트 하면 중복값 뺴는거나 다름없음

	for (int i = 0; i < 42; i++)
	{
		if (a[i] > 0)
		{
			result++;
		}
	}
	cout << result;
}