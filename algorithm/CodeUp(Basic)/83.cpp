#include <iostream>
#include <cmath>
using namespace std;

// ������ ���� ���� ������, ������ �ΰ� �������� ��ȣ�� �ޱ�
// ����� ������ �迭�� �߰�,
// 1~24������ ���� �߰� 0 ���ܴϱ� 23
int main()
{
	int x;
	int a[24] = {};
	cin >> x;
	for (int i = 1; i <= x; i++)
	{
		int random = 0;
		cin >> random;
		a[random]++;
	}
	for (int i = 1; i <= 23; i++)
	{
		cout << a[i] << " ";
	}
}