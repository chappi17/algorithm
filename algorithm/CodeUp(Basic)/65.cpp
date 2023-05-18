#include <iostream>
#include <cmath>
using namespace std;

void repeat(int count)
{
	if (count > 0)
	{
		int x;
		cin >> x;
		cout << x << endl;
		repeat(count - 1);
	}
}

int main()
{
	int n;
	cin >> n;
	repeat(n);

}