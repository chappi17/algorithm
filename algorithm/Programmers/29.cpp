#include <string>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) 
{
	unordered_map<string, int> position;
	for (int i = 0; i < players.size(); i++)
	{
		position[players[i]] = i;
	}

	for (const string& calling : callings)
	{
		int index = position[calling];
		if (index > 0)
		{
			swap(players[index], players[index - 1]);
			position[players[index]] = index;
			position[players[index - 1]] = index - 1;
		}
	}
	return players;
}