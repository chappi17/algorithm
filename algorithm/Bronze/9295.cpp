#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// �׽�Ʈ ���̽� t
// �ι� ���� ���� �μ� ��� 

int main()
{
	int t, x, y;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> x >> y;
		cout << "Case " << i + 1 << ": " << x + y << "\n";
	}
	return 0;
}