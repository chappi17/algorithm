#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int d = a + b + c;

	cout << d<< endl;
	cout << fixed;
	cout.precision(1);
	cout << static_cast<float>(d) / 3 << endl;
}