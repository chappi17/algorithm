#include<iostream>
#include<string>
#include<ctime>
#include<vector>
#include <algorithm>
using namespace std;


int main()
{
	int a;
	cout << " 녕이 화니 부자되는 번호 : ";
	cin >> a;
	cout << "\n";
	vector<int> v;
	int temp;

		srand(a);
		srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{

		while (v.size() < 6)
		{
			int b = rand() % 45+1;
			if (find(v.begin(), v.end(), b) == v.end())
			{
				v.emplace_back(b);
			}
		}
		sort(v.begin(), v.end());

		for (int i = 0; i < 6; i++)
		{
			cout << v[i] << "\t";
		}
		cout << "\n" << "----------------------------------------------------" << "\n";
		v.clear();
	}
	
}