#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// �ִ� �����(2)
// max Ȱ���ϸ� �� �� �����
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


