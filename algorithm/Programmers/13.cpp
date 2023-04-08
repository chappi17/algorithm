#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// 문자열 정리하기
int main()
{
	string my_string = "p2o4i8gj2";
	vector<int> answer;

	for (int i = 0; i < my_string.size(); i++)
	{
		if (isdigit(my_string[i]))
		{
			answer.push_back(my_string[i]- '0');
		}
	}
	sort(answer.begin(), answer.end());


	return 0;
}


