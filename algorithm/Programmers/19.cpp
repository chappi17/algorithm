#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// 배열 회전 시키기
int main()
{
	vector<int> numbers = { 4, 455, 6, 4, -1, 45, 6 };
	string direction = "left";
	vector<int> temp = { 0 };
	vector<int> answer;

	if (direction == "right")
	{
		temp[0] = numbers.back();
		numbers.insert(numbers.begin(), temp[0]);
		numbers.pop_back();
	}

	if (direction == "left")
	{
		temp[0] = numbers.front();
		numbers.insert(numbers.end(), temp[0]);
		numbers.erase(numbers.begin(), numbers.begin()+1);
	}

	answer = numbers;

	return 0;
}


