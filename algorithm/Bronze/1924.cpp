#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// ������ �����ϴ� ���� ���� �Է¹޾ƾ� �� 
// 1�� 1���� ������������ �������� 0, ȭ������ 1
// �����ϴ� ������ ���� 
// ��


int main()
{
	int m, d;
	cin >> m >> d;

	int referenceday = 0; // ������ 

	int daysFromreference = 0;

	for (int i = 1; i < m; i++)
	{
		if (m == 2)
		{
			daysFromreference += 28;
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			daysFromreference += 30;
		}
		else
			daysFromreference += 31;


	}
}