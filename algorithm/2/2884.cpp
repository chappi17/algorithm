#include<iostream>
using namespace std;
int main()
{
	int hour, min;
	cin >> hour >> min;

	if (min < 45)
	{
		if (hour == 0)
		{
			cout << 23 << " " << min + 15;
		}
		else
			cout << hour - 1 << " " << min + 15 << "\n";
	}
	else
		cout << hour << " " << min - 45;


	return 0;
}