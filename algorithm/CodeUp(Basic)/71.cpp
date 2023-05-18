#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int y = 1;
	int sum = 0;
	while (y < x)
	{
		y++;
		if (y % 2 == 0)
		{
			sum += y;
		}
	}
	cout << sum << endl;
}