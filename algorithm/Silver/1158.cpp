#include <iostream>
#include <list>

using namespace std;

int main()
{
	int N;
	int K;
	cin >> N >> K;
	list<int> a;
	list<int> b;

	for (int i = 1; i <= N; i++)
	{
		b.push_back(i);
	}

	auto it = b.begin();
	while (!b.empty())
	{
		for (int i = 0; i < K - 1; i++)
		{
			it++;
			if (it == b.end())
			{
				it = b.begin();
			}
		}

		a.push_back(*it);
		it = b.erase(it);
		if (it == b.end())
		{
			it = b.begin();
		}
	}


	for (auto it = a.begin(); it != b.end(); it++)
	{
		cout << *it;
		auto nextIt = it;
		nextIt++;
		if (nextIt != b.end())
			cout << ", ";
	}

}