#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> num_list = { 1,3,5,7 };
	int count = 0;
	vector<int> answer;

	for (int i = 0; i < num_list.size(); i++)
	{
		if (num_list[i] % 2 == 0)
		{
			count++;
		}
	}
	answer.push_back(count);
	count = 0;

	for (int i = 0; i < num_list.size(); i++)
	{
		if (num_list[i] % 2 != 0)
		{
			count++;
		}
	}
	answer.push_back(count);
	
	return 0;
}