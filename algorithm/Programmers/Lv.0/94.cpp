#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s)
{
	int answer = 0;
	vector<string> b;
	stringstream ss(s);
	string word;

	while (ss >> word)
	{
		b.emplace_back(word);
	}
	

	for (int i = 0; i < b.size(); i++)
	{
		if (b[i] == "Z")
		{
			answer -= stoi(b[i - 1]);
		}
		else
			answer += stoi(b[i]);
	}

	return answer;
}

int main()
{
	solution("10 20 Z 40");
}