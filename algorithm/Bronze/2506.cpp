#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int result = 0;
	int count=0;
	int score=0;

	for (int i = 0; i < a; i++)
	{
		int b = 0;
		cin >> b;
		if (b == 1)
		{
			count++;
			score++;
			result += score;
		}
		else
		{
			score = 0;
		}
	}
	cout << result << "\n";


}