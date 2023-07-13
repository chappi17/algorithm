#include <iostream>
using namespace std;

// ¹ÌÇØ°á 
int main()
{
	int n;
	cin >> n;

	for (int i=0; i <n; i++)
		for (int j = n - 1; i < j; j--)
		{
			cout << " ";
		}

	for (int i = 0; i < 2 * i + 1; i++)
	{
		cout << "*";
	}
	cout << endl;
}