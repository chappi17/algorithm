#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string solution(string s) 
{
	string answer = "";
	unordered_map<char, int> a;
	vector<char> d;

	for (char b : s)
	{
		a[b]++;
	}

	for (auto c : a)
	{
		if (c.second == 1)
		{
			d.emplace_back(c.first);
		}
	}

	for (int i = 0; i < d.size(); i++)
	{
		answer += d[i];
	}

	sort(answer.begin(), answer.end());

	return answer;
}

int main()
{
	solution("abcabcadc");
}