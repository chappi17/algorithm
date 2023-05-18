#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int x;
	cin >> hex>>x;

	for (int i = 1; i < 16; i++)
	{

		cout <<hex<<uppercase << x << "*" << i << "=" << x* i << endl;
	}
}