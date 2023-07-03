#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 테스트 케이스 


int main()
{
	int x,y,z,result;
	result = 0;
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cin >> y;
		for (int j = 0; j < y; j++)
		{
			cin >> z;
		//	cout << " ";
			result += z;
		}
	cout << result << "\n";
	result = 0;
	}


	return 0;
}