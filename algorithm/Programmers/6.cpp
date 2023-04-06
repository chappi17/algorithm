#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// 자릿수 더하기
int main()
{
	int n = 930211;
	int answer = 0;
	while (n >0)
	{
		answer += n % 10;
		n /= 10;
	}

	return 0;
}






//int temp = 0;
//int temp2 = n;

//for (int i = 0; i < 100000; i++)
//{
//	if (n == 0)
//	{
//		n = temp2;
//		break;
//	}
//	n /= 10;
//	temp++;
//}

//for (int i = 0; i < temp; i++)
//{
//	answer += n % 10;
//	n /=10;
//}