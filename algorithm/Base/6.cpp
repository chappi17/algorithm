#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	cout << "���� ������ �Է��Ͻʽÿ�" << "\n";

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