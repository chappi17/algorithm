#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
	vector<int> answer;
	for (int i = n; i < num_list.size(); i++)
	{
		answer.emplace_back(num_list[i]);
	}

	for (int i = 0; i < n; i++)
	{
		answer.emplace_back(num_list[i]);
	}
	
	return answer;
}

int main()
{
	solution({ 5,2,1,7,5 }, 3);
}