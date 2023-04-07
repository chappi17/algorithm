#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <ctype.h>
using namespace std;

// 암호 해독
int main()
{
	string cipher = "dfjardstddetckdaccccdegk";
	int code = 4;
	string answer = "";

	for (int i = 0; i < cipher.size(); i ++)
	{
		if ((i+1) % code ==0)
		answer += cipher[i];	
	}
	return 0;
}
