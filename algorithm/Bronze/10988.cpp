#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string n;
	string Compare;
	int result=0;
	cin >> n;

	Compare = n;
	reverse(n.begin(), n.end());
	
	if (Compare == n)
	{
		result++;
	}
	else
	{

	}
		cout << result;
}