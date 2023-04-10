#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// 숫자 찾기
int main()
{
	int num = 123456;
	string temp;
	int k = 7;
	int answer=0;

	temp = to_string(num);
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i] - '0' == k)
		{
			answer = i + 1;
			break;
		}
	}
	if (answer == 0)
	{
		answer = -1;
	}

	return 0;
}


