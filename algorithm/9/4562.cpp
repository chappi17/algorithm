#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// ������ �Է¹޴� ��Ʈ Ƚ�� �Է� �ޱ�
// ���� 2�� �Է¹ޱ�  x,y
// x�� ���� ���� �� ����, y�� ���� �Ծ�� �����ϴ� �� ���� 
//x�� y���� ������ "No BRAINS"  ���, y�� ���ų� y���� ũ�� "MMM BRAINS" ��� 

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		if (x < y)
		{
			cout << "NO BRAINS" << "\n";
		}
		else
			cout << "MMM BRAINS" << "\n";
	}

	return 0;
}