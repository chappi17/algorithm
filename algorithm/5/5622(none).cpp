#include <iostream>
#include <string>
using namespace std;

// 미해결, 모르겠다. 
int main()
{
	string n;
	int result=0;
	getline(cin, n);

	int time[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };

	for (int i = 0; n.size(); i++)
	{
		result += time[n[i] - 'A'];
	}
	cout << result;
}