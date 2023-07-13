#include <iostream>
using namespace std;

int main()
{
	int n;
	char a[101];

	cin >> n >> a;

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		// char를 int 로 바꿔서 연산하기가 핵심
		// 문자열 정수형으로 바꾸려면 
		// - '0' 하면 된다.  
		sum += a[i] - '0';
	}
	cout << sum;
	
}