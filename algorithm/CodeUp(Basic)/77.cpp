#include <iostream>
using namespace std;

// endl; �� �������� �뷮 ���� ��ƸԾ, 
// '\n' ���� �� �ٲ��ϸ� �����̳��� �پ���. 

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