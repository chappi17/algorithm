#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a;
	cin >> a;

	int count=0;
	for (int i = 0; i < a; i++)
	{
		int c, d;
		cin >> c >> d;

		for (int j = c; j <= d; j++)
		{
			string a;
			a = to_string(j);
			
			for (char b : a)
			{
				if (b == '0')
				{
					count++;
				}
			}

		}
	cout << count << "\n";
	count = 0;
	}
}