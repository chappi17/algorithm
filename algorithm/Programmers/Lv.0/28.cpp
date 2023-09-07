#include <string>
#include <vector>

using namespace std;

//  mode가 0 이면 i 가 짝수일때 뒤에 추가
//  mode가 1 이면 i 가 홀수일때 뒤에 추가

string solution(string code) {
	string answer = "";

		int mode = 0;
	for (int i = 0; i < code.size(); i++)
	{
		if (mode == 0)
		{
			if (code[i] != '1')
			{
				if (i % 2 == 0)
				{
					answer += code[i];
				}
			}
			else mode = 1;
			continue;
		}
		if (mode == 1)
		{
			if (code[i] != '1')
			{
				if (i % 2 != 0)
				{
					answer += code[i];
				}
			}
			else mode = 0;
			continue;
		}
	}
	if (answer == "")
	{
		answer = "EMPTY";
	}
	return answer;
}

int main()
{
	solution("abc1abc1abc");
}