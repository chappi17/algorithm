#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// 2���� ��ǥ ��� ������ vector<pair<int,int>> v; �� ���� ����. 

int main()
{
	int N;
	cin >> N;

	int x = 0, y = 0;
	vector<pair<int, int>> cordinate;

	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		cordinate.push_back({ x,y });
	}
	sort(cordinate.begin(), cordinate.end());

	for (int i = 0; i < N; i++)
	{
		cout << cordinate[i].first << " " << cordinate[i].second << "\n";
	}
}