#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <ctype.h>
using namespace std;

// 대문자와 소문자
int main()
{
	string my_string = "cccCCC";
	string answer = "";


	for (int i = 0; i < my_string.size(); i++)
	{
		if (islower(my_string[i]))
		{
			answer +=toupper(my_string[i]);
		}
		else if (isupper(my_string[i]))
		{
			answer += tolower(my_string[i]);
		}
	}
	return 0;
}
