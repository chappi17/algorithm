#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
// �Ӿ��̺��� Ű ū ��� 
int main()
{
	vector<int> array = { 149,180,192,170 };
	int height = 167;
	int answer = 0;

	for (int i = 0; i < array.size(); i++)
	{
		if (height < array[i])
		{
			answer++;
		}
	}

	return 0;
}