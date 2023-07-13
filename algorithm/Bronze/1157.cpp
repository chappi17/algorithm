#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

int main()
{
	string word;
	string note[100];
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		note[i]+= tolower(word[i]);
	}

	for (int i = 0; i < word.size(); i++)
	{

	}

	return 0;
}