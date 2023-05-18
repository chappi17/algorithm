#include <iostream>
using namespace std;

int main() 
{
	int x;
	cin >> x;

	for (int i = 1; i <= x; i++)
	{
		if (i % 3 == 0 )
		{
			cout << "X" << " ";
		}
		else
		{
			cout << i << " ";
		}
	}
}