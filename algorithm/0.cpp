#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	vector<int> num_list = {1,1,1,1,1,2};
	vector<int> answer;
	
	for (int i = 0; i < 1; i++)
	{
		reverse(num_list.begin(), num_list.end());
	}
	answer = num_list;

	return 0;
}