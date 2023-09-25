#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
	vector<int> answer;

	int minelement = *min_element(arr.begin(), arr.end());

	for (int a : arr)
	{
		if (a != minelement)
		{
			answer.emplace_back(a);
		}
	}

	if (answer.empty())
	{
		answer.emplace_back(-1);
	}

	return answer;

}

int main()
{
	solution({ 10 });
}