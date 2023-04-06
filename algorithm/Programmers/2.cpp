#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// 특정 문자 제거하기 
int main()
{
	string my_string = "abcdef";
	string letter = "f";
	string answer;

	for (int i = 0; i < my_string.size(); i++)
	{
		if (my_string[i] != letter[0])
		{
			answer += my_string[i];
		}
	}

	return 0;
}