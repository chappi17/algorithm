#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// 개미 군단
int main()
{
	int hp = 24;
	int answer = 0;
	int temp = 0;
	int GA =0;
	int BA =0;
	int IA =0;
	

		temp = hp % 5;
		GA = hp / 5;

		BA = temp/ 3;
		temp %= 3;

		IA =temp/ 1;
		temp %= 1;

		answer = GA + BA + IA;

	return 0;
}

//answer += hp / 5;
//hp %= 5;
//answer += hp / 3;
//hp %= 3;
//answer += hp / 1;
//hp %= 1;