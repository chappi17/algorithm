#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// ���ڿ� �����ϱ�
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


