#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// while �� �ݺ��ϰ�, 0,0 �Է� ���ö� Ż��
// �׽�Ʈ ���̽� ���� 2���� ����
// �Է� ������ �ٿ��� 0 0 �ް�, ���α׷� ���� 


int main()
{

	while (true)
	{
		int x, y;
		cin >> x >> y;
		if (x == 0 && y == 0)
		{
			break;
		}
		if (x > y)
		{
			cout << "Yes" << "\n";
		}
		else
			cout << "No" << "\n";
	}


	return 0;
}