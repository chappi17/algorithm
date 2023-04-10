#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// 한번만 등장한 문자 
int main()
{
	string s = "abcabcadc";
	string answer = "";

	sort(s.begin(), s.end());
	unique(s.begin(), s.end());

	for (int i = 0; s.size(); i++)
	{

	}
	return 0;
}


