#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int A;					// ���� �Է��� �� 
	int a[42] = { 0 };		// 1~42 ���� ������ 41 ���� ���̽��� ����
	int result = 0;			// �׷��� �迭 1~41���� �����

	for (int i = 0; i < 10; i++)
	{
		cin >> A;				// ���� �Է� ���� 
		a[A % 42]++;			// �Է¹��� ���� �迭 0~41�� �Է�
	}							// ���� �ߺ��� �� ������ ++ ��  ���� ���� �߰��� 
								// �׷��� 0�� �ƴ� ���� ī��Ʈ �ϸ� �ߺ��� ���°ų� �ٸ�����

	for (int i = 0; i < 42; i++)
	{
		if (a[i] > 0)
		{
			result++;
		}
	}
	cout << result;
}