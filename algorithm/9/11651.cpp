#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int N;
	cin >> N;

	int x = 0, y = 0;
	vector<pair<int, int>> cordinate;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		cordinate.push_back({ y,x });
	}
	sort(cordinate.begin(), cordinate.end());

	for (int i = 0; i < N; i++)
	{
		cout << cordinate[i].second << " " << cordinate[i].first << "\n";
	}
}