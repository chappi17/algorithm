#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//숫자의 개수

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	int d = a * b * c;
	int count[10] = { 0 };

	while (d > 0)
	{
		int digit = d % 10;
		count[digit]++;
		d /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << count[i] << "\n";
	}


}