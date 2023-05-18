#include <iostream>
#include <cmath>
using namespace std;
// 3, 7 ,9 로 나뉘어 떨어지는 날 \
// while 은 조건이 참일때만 내부 스택 들어가짐

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int day = 1;
	while (!(day % a ==0 && day % b == 0 && day % c ==0) )// 헷갈리면, 참인 조건 써놓고 앞에! 붙이자
	{
		day++;
	}
	cout << day << endl;

}