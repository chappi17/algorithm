#include<iostream>
using namespace std;
int main()
{
	int a, b;	
	int A, B, C;
	cin >> a >> b;

	cout << a * (b % 10) << endl;
	A = a * (b % 10);

	cout << a * ((b % 100) / 10) << endl;
	B = a * ((b % 100) / 10) * 10;

	cout <<a*((b % 1000) / 100) << endl;
	C = a * ((b % 1000) / 100) * 100;

	cout <<  A + B + C;

	return 0;
}