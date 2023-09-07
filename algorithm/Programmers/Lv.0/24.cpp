#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
	string answer = "";

	for (int i = 0; i <= my_string.size(); i++)
	{
		if (i == s)
		{
			for (int j = 0; j < overwrite_string.size(); j++)
			{
				answer += overwrite_string[j];
				i++;
			}	
			i--;
		}
		else
		{
			answer += my_string[i];
		}
	}

	return answer;
}

int main() {

	solution("He11oWor1d", "lloWorl", 2);
	solution("Program29b*UYP", "merS123", 7);

	return 0;
}