#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int a, b;
	string x, y;
	cin >> a >> b;

	x += to_string(a); // 문자열 x 에 정수 a 넣기
	y += to_string(b);

	reverse(x.begin(), x.end()); // 문자열 뒤집는 기능 reverse
	reverse(y.begin(), y.end());

	a = stoi(x); // 문자열을 다시 정수로 
	b = stoi(y);

	if (a > b) // 크기 비교해서 출력
		cout << a;
	else
		cout << b;
}