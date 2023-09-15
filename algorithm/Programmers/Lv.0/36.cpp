#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<vector<int >> v)
{
	vector<int> ans;

	for (int i = 0; i < v.size(); i++)
	{

		if (v[0][i] == v[1][i])
		{
			ans[i] = v[2][i];
		}
		else if (v[0][i] == v[2][i])
		{
			ans[i] = v[1][i];
		}
		else if (v[1][i] == v[2][i])
		{
			ans[i] = v[0][i];
		}

	}

	return ans;
}

int main()
{
	solution({ { 1,4 }, { 3,4 }, { 3,10 } });
}