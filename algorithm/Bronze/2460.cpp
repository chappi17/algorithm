#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 10개의 기차역에서 사람들이 타고 내렸을때
// 가장 사람이 많이 탔을때를 찾아야함
// 자연수 2개, 1-> 내린 사람 2-> 탄 사람 


int main()
{
	int x, y;
	vector<int> t;
	int c = 0;


	for (int i = 0; i < 10; i++)
	{
		cin >> x >> y;
		c -= x;
		c += y;
		t.emplace_back(c);
	}
	sort(t.rbegin(), t.rend());
	cout << t[0] << "\n";

	return 0;
}