#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
// ���ӵǴ� ���� �ޱ�

int main()
{
	int x;
	cin >> x; 

	set<int> y;

	for (int i= 0; i < x; i++)
	{
		int c;
		cin >> c;
		y.insert(c);
	}

	vector<int>numbers(y.begin(), y.end());

	for (int i = 0; i < y.size(); i++)
	{
		cout << numbers[i] << endl;
	}

	return 0;
}