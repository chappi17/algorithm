#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string n;
	string c,d;
	string b[11];
	int a;
// 횟수 
	cin >> a;
// 문자열 입력
	for (int i = 0; i < a; i++)
	{
		cin >> n;
// 대입
		c = n[0];
		d = n.back();
		b[i] = c + d;
	}
	
// 출력
	for (int i = 0; i < a; i++)
	{
		cout << b[i] << endl;
	}
}