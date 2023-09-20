#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
	vector<int> answer;

	for (auto interval : intervals)
	{
		int k = interval[0];
		int j = interval[1];

		for (int i = k; i <= j; i++)
		{
			answer.emplace_back(arr[i]);
		}
	}
	return answer;
}

int main()
{
	solution({ 1,2,3,4,5 }, { {1,3},{0,4} });
}