#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int d = (a < b ? (a < c ? a : c) : (b < c ? b : c));

	cout << d << endl;
}