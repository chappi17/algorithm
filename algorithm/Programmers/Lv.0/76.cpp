#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
	vector<int> answer;
	string c;
	int index = 0;

	for (string a : intStrs)
	{
		for (char b : a)
		{
			if (index >= s)
			{
				if (c.length() == l)
				{
					break;
				}
				c += b;
			}
			index++;
		}            if (stoi(c) > k)
		{
			answer.emplace_back(stoi(c));
		}
		c.clear();
		index = 0;
	}
	return answer;
}

int main()
{
	solution({ "0123456789","9876543210","9999999999999" }, 50000, 5, 5);
}