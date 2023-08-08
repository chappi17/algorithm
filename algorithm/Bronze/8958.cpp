#include<iostream>
#include <string>
using namespace std;


int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string a;
		cin >> a;

		int count = 0;
		int score = 0;

		for (char b : a)
		{
			if (b == 'O')
			{
				count++;
				score += count;
			}
			else
				count = 0;
		}
	cout << score << "\n";
	}

}