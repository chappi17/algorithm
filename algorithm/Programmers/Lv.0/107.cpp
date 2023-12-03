#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> remove_back(vector<int>& arr, int index)
{
	arr.erase(arr.begin() + index + 1, arr.end());
	return arr;
}

vector<int> remove_front(vector<int>& arr, int index)
{
	arr.erase(arr.begin() ,arr.begin()+index);
	return arr;
}

vector<int> solution(vector<int> arr, vector<int> query) {
	vector<int> answer = arr;
	vector<int> temp;

	for (int i = 0; i < query.size(); i++)
	{
		if (i % 2 == 0)
		{
			answer = remove_back(arr, query[i]);
		}
		else
		{
			answer = remove_front(arr, query[i]);
		}
	}
	return answer;
}

int main()
{
	solution({ 0,1,2,3,4,5 }, { 4,1,2 });
}

// 0,1,2,3,4,5    4,1,2 