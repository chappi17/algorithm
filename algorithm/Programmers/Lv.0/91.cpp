#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
	int start = -1;
	int end = -1;

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] == 2)
		{
			if (start == -1)
			{
				start = i;
			}
				end = i;
		}
	}

	if (start == -1 || end == -1)
	{
		return { -1 };
	}
	vector<int> answer(arr.begin() + start, arr.begin()+end+1);

	return answer;
}

int main()
{
	solution({1,2,1,2,1,10,2,1});
}