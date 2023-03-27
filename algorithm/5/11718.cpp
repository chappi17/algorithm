#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;

	while (true)
	{
		getline(cin, n);
		if (n == "")
			break;
		cout << n << endl;
	}
}