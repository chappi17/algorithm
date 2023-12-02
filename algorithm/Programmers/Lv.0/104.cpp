#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
	vector<vector<int>> answer;

	int Hang = arr.size();
	int Yoll = arr[0].size();

	if (Hang == Yoll)
	{
		for (int i = 0; i < arr.size(); i++)
		{
			answer.emplace_back(arr[i]);
		}
	}

	while (Hang != Yoll)
	{
		if (Hang > Yoll)
		{
			for (vector<int>& a : arr)
			{
				a.emplace_back(0);
			}
			Yoll++;
			answer = arr;
		}
		else
		{
			vector<int> newHang(Yoll, 0);
			for (int i = 0; i < Yoll - Hang; i++)
			{
				arr.emplace_back(newHang);
				Hang++;
			}
			answer = arr;
		}
	}
	return answer;
}

int main()
{
	solution({ {57,192,534,2},{9,345,192,999} });
}

//{572, 22, 37},{287, 726, 384},{85, 137, 292},{487, 13, 876}
//{57,192,534,2},{9,345,192,999}
// {1,2},{3,4}