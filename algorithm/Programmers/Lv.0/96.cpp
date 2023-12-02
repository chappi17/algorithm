#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
	int answer = 0;
	vector<int> arrx;
	int x = 0;
	int count = 0;

	while (true)
	{
		if (count == arr.size())
		{
			break;
		}
		count = 0;
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i] >= 50 && arr[i] % 2 == 0)
			{
				arr[i] /= 2;
			}
			else if (arr[i] < 50 && arr[i] % 2 == 1)
			{
				arr[i] = (arr[i] * 2) + 1;
			}
			else
			{
				count++;
			}
		}
		x++;
	}
	answer = x-1;

	return answer;
}

int main()
{
	solution({ {1,2,3,100,99,98} });
}