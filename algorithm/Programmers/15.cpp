#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// 최댓값 만들기(2)
// max 활용하면 좀 더 쉬울듯
int main()
{
	vector<int> numbers = {1,2,-3,4,-5};
	int answer = 0;
	int temp = 0;

	sort(numbers.begin(), numbers.end());
	temp =numbers[0] * numbers[1];

	sort(numbers.rbegin(), numbers.rend());
	answer =numbers[0] * numbers[1];

	if (temp > answer)
	{
		answer = temp;
	}
	else
		return answer;


	return 0;
}


