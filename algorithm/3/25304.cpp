#include<iostream>
using namespace std;
int main()
{
	int sum,time,a,b;
	cin >> sum >> time;

	for (int i = 1; i <= time; i++)
	{
		cin >> a >> b;
		sum = sum - (a * b);
	}
	if (sum == 0)
	{
		cout << "Yes";
	}
	else
		cout << "No";

	return 0;
}