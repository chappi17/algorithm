#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// n의 배수 고르기
int main()
{
	int n = 3;
	vector<int> numlist = { 4,5,6,7,8,9,10,11,12 };
	vector<int> answer;

	for (int i = 0; i <numlist.size(); i++)
	{
		if (numlist[i] % n == 0)
			answer.emplace_back(numlist[i]);
	}

	return 0;
}


