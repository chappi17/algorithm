#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// 모음 제거
int main()
{
	string my_string = "bus";
	string vowel = "aeiou";
	string answer;

	for (int i = 0; i < my_string.size(); i++)
	{
		for (int j = 0; j < vowel.size(); j++)
		{
			if (my_string[i] == vowel[j])
			{
				break;
			}
			else
			{
			
				if (j == 4)
				answer += my_string[i];
			}
		}
	}

	return 0;
}