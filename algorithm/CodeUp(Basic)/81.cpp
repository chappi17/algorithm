#include <iostream>
#include <cmath>
using namespace std;

// 등비수열 공식
// 첫번째 항과, 등차를 알면 몇번쨰 항인지 구할 수 있다
// a * pow(r,n-1);
// a 첫번쨰 항의 값
// n 몇번째 항인지
// r 등비의 값 (얼마나 차이나는지)

int main()
{
	int a, r, n;
	long long int count;
	cin >> a >> r >> n;

	count = a * pow(r, n - 1);
	cout << count << endl;
}