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
	string my_string = "Python";
	string answer = "";

	for (int i = 0; i < my_string.size(); i++)
	{
		answer +=tolower(my_string[i]);
	}
	sort(answer.begin(), answer.end());

	return 0;
}


