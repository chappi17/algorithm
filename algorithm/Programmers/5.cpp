#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// ¼û¾îÀÖ´Â ¼ıÀÚÀÇ µ¡¼À
int main()
{
	string my_string = "1a2b3c4d123";
	int answer = 0;

	for (int i = 0; i < my_string.size(); i++)
	{
		if (isdigit(my_string[i]))
		{
			answer+= my_string[i]-'0';
		}
	}

	return 0;
}