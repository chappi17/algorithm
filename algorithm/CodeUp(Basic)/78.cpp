#include <iostream>
using namespace std;


int main()
{
	int x;
	int answer = 0;
	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		if (answer >= x)
		{
			break;
		}
		answer += i;
	}
	cout << answer << endl;
}