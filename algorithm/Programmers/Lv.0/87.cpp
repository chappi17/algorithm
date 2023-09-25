#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string myStr)
{
	vector<string> answer;
	string temp;

	for (char ch : myStr)
	{
		if (ch == 'a' || ch == 'b' || ch == 'c')
		{
			if (!temp.empty())
			{
				answer.emplace_back(temp);
				temp.clear();
			}
		}
		else
			temp += ch;
	}

	if (!temp.empty())
	{
		answer.emplace_back(temp);
	}
	else
	{
		answer.emplace_back("EMPTY");
	}
	return answer;
}

int main()
{
	solution("cabab");
}