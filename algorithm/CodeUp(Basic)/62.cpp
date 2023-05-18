#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;
	cin >> x;

	if (90 <= x && 100 >= x)
	{
		cout << "A" << endl;
	}
	else if (70 <= x && 89 >= x)
	{
		cout << "B" << endl;
	}
	else if (40 <= x && 69 >= x)
	{
		cout << "C" << endl;
	}
	else if (0 <= x && 39 >= x)
	{
		cout << "D" << endl;
	}
}