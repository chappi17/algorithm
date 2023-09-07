#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int GCD(int x, int y)
{
	int R;
	int answer = 0;
	R = x % y;
	while(R != 0)
	{
		x = y;
		y = R;
		R = x % y;
	}

	answer = y;
	cout << y << "\n";
	return y;
}

int LCM(int x, int y,int z)
{
	int answer = 0;
	answer = (x * y) / z;
	cout << answer << "\n";
	return answer;
}

int main()
{

	int z =	GCD(72,30);

	LCM(72, 30, z);


	return 0;
}