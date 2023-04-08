#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// 주사위의 개수
int main()
{
	vector<int> box = { 1,1,1 };
	int n = 1;
	int answer = 1;

	for (int i = 0; i < box.size(); i++)
	{
		answer *= box[i] / n;
	}

	return 0;
}


