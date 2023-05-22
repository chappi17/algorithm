#include <iostream>
#include <cmath>
using namespace std;

// 지정된 숫자 범위 내에서, 공백을 두고 무작위로 번호를 받기
// 출력한 내용을 배열에 추가,
// 1~24까지의 내용 추가 0 제외니까 23
int main()
{
	int x;
	int a[24] = {};
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		int random = 0;
		cin >> random;
		a[random]++;
	}
	for (int i = 1; i <= 23; i++)
	{
		cout << a[i] << " ";
	}
}