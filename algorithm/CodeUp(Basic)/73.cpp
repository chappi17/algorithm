#include <iostream>

using namespace std;

int main()
{
	int x, y=0;
	cin >> x;

	for (int i = 1; i < x; i++)
	{
		y += i;
		if (y >= x)
		{
			y = i;
			break;
		}
	}
	cout << y << endl;

}