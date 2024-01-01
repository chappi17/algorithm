#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> grid(8,vector<int>(8,5));

	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[i].size(); j++)
		{
			cout << grid[i][j];
		}
		cout << "\n";
	}

	return 0;
}