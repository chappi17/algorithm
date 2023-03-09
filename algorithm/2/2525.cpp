#include<iostream>
using namespace std;
int main()
{
	int hour, min, total_time, time;
	cin >> hour >> min;
	cin >> time;

	total_time = hour * 60 + min + time;

	cout << (total_time / 60) % 24 << " " << total_time % 60;
	return 0;
}