#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	double x;
	cin >> x;
	cout<<fixed;
	cout.precision(11);
	cout << x << endl;
}