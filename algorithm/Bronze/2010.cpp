#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// ��Ƽ���� ���� n
// ��� �÷��׸� ���� �� �ִ��� ��Ÿ���� �ڿ���
// �Ѱ��� ������ �÷��� �� 1���� �پ��
int main()
{
	int n,x,y;
	y = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		y += x;
	}
	cout << y- (n-1) << "\n";


	return 0;
}