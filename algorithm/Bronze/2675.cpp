#include <iostream>
#include <string>
// 아니 따로따로 출력해도 되는거면 나도 하지
// 나는 한꺼번에 출력 받아서 한번에 쫙 나와야하는건줄 알았지 아놔
using namespace std;

int main()
{
	int Test;
	cin >> Test;

	for (int i = 0; i < Test; i++)
	{
		string s, p;
		int r;

		cin >> r >> s;

		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < r; k++)
			{
				cout << s[j];
			}
		}
		cout << endl;
	}
}