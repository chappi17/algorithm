#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	cout << "시험 점수를 입력하십시오" << "\n";

	int a[5];
	int maxscore;

	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		maxscore = max(maxscore, a[i]);
	}
	cout << "\n";

	cout << maxscore;

}