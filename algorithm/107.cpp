#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
	vector<int> answer;
	vector<int> temp;

	// arr에서 query[i] 인덱스를 제외한 것 temp로 옮기기

	for (int a : query)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			if (a != arr[i])
			{
				temp.emplace_back(arr[i]);
			}
		}
		if (a % 2 == 0 && a != 0)
		{
			temp.pop_back();
			temp.emplace_back(a);
		}
		else if (a % 2 != 0 && a != 0)
		{
			reverse(temp.rbegin(), temp.rend());
			temp.pop_back();
			temp.emplace_back(a);
			reverse(temp.begin(), temp.end());
		}
		arr.clear();
		arr = temp;
		temp.clear();
	}
	answer = arr;
	return answer;
}

int main()
{
	solution({ 0,1,2,3,4,5 }, { 4,1,2 });
}

// 0,1,2,3,4,5    4,1,2 