#include <iostream>
using namespace std;

// endl; 가 생각보다 용량 많이 잡아먹어서, 
// '\n' 으로 줄 바꿈하면 조금이나마 줄어든다. 

int main()
{
	int x, y, z;
	int count = 0;
	cin >> x >> y >> z;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			for (int k = 0; k < z; k++)
			{
				cout << i << " " << j << " " << k << '\n';
				count++;
			}
		}
	}
	cout << count << '\n';
}