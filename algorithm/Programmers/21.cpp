#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// 369 ���� 
// ���ڿ��� ������ �ϴ°� ���ٰ� ������ ��
int main()
{
	int order = 30034;
	int answer = 0;
	string temp;

	temp =to_string(order);
	for (int i = 0; i < temp.size(); i++)
	{
		if (temp[i]-'0' == 0)
		{
			continue;
		}
		if (temp[i] % 3 == 0)
		{
			answer++;
		}
	}

	return 0;
}


