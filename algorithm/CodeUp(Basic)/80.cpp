#include <iostream>
using namespace std;

// 등차수열 공식
// 첫번째 항과, 등차를 알면 몇번쨰 항인지 구할 수 이싿. 
// a + (n-1) * d
// a 첫번쨰 항의 값
// n 몇번째 항인지
// d 등차의 값 (얼마나 차이나는지)

int main()
{
	int a, d, n;
	int count = 0;
	cin >> a >> d >> n;

	count = a + (n - 1) * d;
	cout << count << endl;
}