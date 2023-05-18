#include <iostream>

using namespace std;

int main()
{
	char x;
	cin >> x;

	while (x != 'q')
	{
		cout << x << endl;;
		cin >> x;
	}
	cout << x << endl;
}