#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	char x;
	cin >> x;

	switch (x)
	{
	case 'A':
		cout << "best!!!" << endl;
		break;
	case 'B':
		cout << "good!!" << endl;
		break;
	case 'C':
		cout << "run!" << endl;
		break;
	case 'D':
		cout << "slowly~" << endl;
		break;
	default:
		cout << "what?" << endl;
		break;
	}
}