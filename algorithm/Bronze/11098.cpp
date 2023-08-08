#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	int p;
	int c;
	string d;
	int temp = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> p;
		string best_name;
		int best_price = 0;
		for (int j = 0; j < p; j++)
		{
			cin >> c >> d;

			if (c > best_price)
			{
				best_name = d;
				best_price = c;
			}
		}
		cout << best_name << "\n";
	}

}