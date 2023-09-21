#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
	vector<vector<int>> answer;

	vector<int> temp;
	for (int i = 0; i < num_list.size(); i++)
	{
		if (temp.size() == n)
		{
			answer.emplace_back(temp);
			temp.clear();
		}

		temp.emplace_back(num_list[i]);
	}
	answer.emplace_back(temp);
	return answer;
}

int main()
{
	solution({ 100,95,2,4,5,6,18,33,948 }, 3);
}