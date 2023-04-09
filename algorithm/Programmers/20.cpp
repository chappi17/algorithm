#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// 가장 큰 수 찾기 
int main()
{
	vector<int> array = { 1,8,3 };
	vector<int> answer;
	int temp = 0;
	int index = 0;

	for (int i = 0; i < array.size(); i++)
	{
		if (temp < array[i])
		{
			temp = array[i];
			index = i;
		}
	}
	answer.emplace_back(temp);
	answer.emplace_back(index);

	return 0;
}


