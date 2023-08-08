#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	string name;
	int day;
	int month;
	int year;

	int oldest = 0;
	int youngest = 0;

	string oldestname;
	string youngestgname;

	for (int i = 0; i < n; i++)
	{
		cin >> name >> day >> month >> year;

		int age = year * 10000 + month * 100 + day; // 생년월일을 하나의 정수로 만들어서 비교 

		if (i == 0 || age > youngest)
		{
			youngest = age;
			youngestgname = name;
		}

		if (i == 0 || age < oldest)
		{
			oldest = age;
			oldestname = name;
		}
	}

	cout << youngestgname << "\n";
	cout << oldestname << "\n";
}