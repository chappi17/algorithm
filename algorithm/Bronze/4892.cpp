#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// ÀÓÀÇÀÇ ¼ýÀÚ n
//  n1 = 3 * n
// n1ÀÌ Â¦¼ö¸é n2 =n1/2
// n1ÀÌ È¦¼ö¸é n2 = (n1+1) /2
// n3= 3* n2
// n4 =n3/9
// n1ÀÌ Â¦¼ö¸é n =2*n4 
// n1ÀÌ È¦¼ö¸é 2*n4 +1 
int main()
{

		int count = 1;
	while (true)
	{
		int n;
		string w = {};
		cin >> n;

		if (n == 0)
			break;
		else
		{
			int n1 = 3 * n;
			int n2 = 0;
			if (n1 % 2 == 0)
			{
				n2 = n1 / 2;
				//for (int i = 1; i <= 1000000; i++)
				//{
				//	cout << i << "."  << "odd" << "\n";
				//}
				w = "even";
			}
			else
			{
				n2 = (n1 + 1) / 2;
				w = "odd";
			}
			int n3 = 3 * n2;
			int n4 = n3 / 9;

			if (n1 % 2 == 0)
			{
				n = 2 * n4;
			}
			else
				n = 2 * n4 + 1;
		cout << count << "." << " " << w << " " << n4 << "\n";
		count++;
		}
	}	
	return 0;
}