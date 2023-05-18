#include <iostream>

using namespace std;

int main()
{
	char x;
	char y = 'a';
	cin >> x;

	if (x >= 'a' && x <= 'z')
	{
		while (y <= x)
		{
			cout << y << " ";
			y++;
		}
	}
}