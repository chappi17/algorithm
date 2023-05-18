#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;
	cin >> x;
	string season;	

	if ( x >= 1 && x <= 12)
	{
		switch (x)
		{
		case 12:
		case 1:
		case 2:
			season = "winter";
			break;
		case 3:
		case 4:
		case 5:
			season = "spring";
			break;
		case 6:
		case 7:
		case 8:
			season = "summer";
			break;
		case 9:
		case 10:
		case 11:
			season = "fall";
			break;
		}
	}
	cout << season << endl;
	
}