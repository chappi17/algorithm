#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <ctype.h>

using namespace std;

// 가위 바위 보
int main()
{
	string rsp = "502";
	string answer = "";

	for (int i = 0; i < 100; i)
	{

		if (rsp[i] == '2')
		{
			answer += '0';
			i++;
		}
		if (rsp[i] == '0')
		{
			answer += '5';
			i++;
		}
		if (rsp[i] == '5')
		{
			answer += '2';
			i++;
		}

	}

	return 0;
}
