#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int a, b;
	string x, y;
	cin >> a >> b;

	x += to_string(a); // ���ڿ� x �� ���� a �ֱ�
	y += to_string(b);

	reverse(x.begin(), x.end()); // ���ڿ� ������ ��� reverse
	reverse(y.begin(), y.end());

	a = stoi(x); // ���ڿ��� �ٽ� ������ 
	b = stoi(y);

	if (a > b) // ũ�� ���ؼ� ���
		cout << a;
	else
		cout << b;
}