#include <string>
#include <vector>

using namespace std;

string solution(int n) {
	string answer = "";
	string a = "��";
	string b = "��";
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			answer += b;
		}
		else
		{
			answer += a;
		}
	}

	return answer;
}

int main()
{
	solution(4);
}