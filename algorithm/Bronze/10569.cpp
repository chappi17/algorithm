#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
// �׽�Ʈ ����Ʈ �Է� ����
// ������ ����, �𼭸��� ����
// ������ ���� - �𼭸��� + ���� �� = 2
// ���� ���� ����ϱ� 

int main()
{
	int n, a, b, c;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		c = 2 - (a - b);
		cout << c << "\n";
	}
	return 0;
}