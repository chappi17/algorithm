#include<iostream>
using namespace std;
int main()
{
	int A;
	cin >> A;

	if (A % 4 == 0)
	{
		if (A % 400 == 0)
		{
			cout << "1\n";
		}
		else if (A % 100 != 0)
		{
			cout << "1\n";
		}
		else 
			cout << "0\n";
	}
	else
		cout << "0\n";
	return 0;
}