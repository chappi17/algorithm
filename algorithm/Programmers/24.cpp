#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// A로 B 만들기
int main()
{
	string before = "olleh";
	string after = "hello";
	int answer = 0;

	sort(before.begin(), before.end());
	sort(after.begin(), after.end());
	if (before == after)
	{
		answer = 1;
	}
	else
		answer = 0;

	return 0;
}


