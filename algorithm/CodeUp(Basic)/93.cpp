#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

// 1. �̷� ������ �ޱ�
// 2. ���� ��ġ ���ϱ�
// 3. ���������� �̵��ϰ�, ������ �Ʒ��� ��������, ���̻� ������ �� ������ ��Ʈ��
// 4. ��ǥ�迭�̶�, ���������� �þ�� x ���� �þ��, �Ʒ������� ������ y ���� �þ

int main()
{
	int maze[10][10];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> maze[i][j];
		}
	}


	int x = 1; int y = 1; // 0���� �����ϸ� 1 �� 2�� ������� 
	while (true)
	{
		if (maze[x][y] == 2)
		{
			maze[x][y] = 9;
			break;
		}
		else
		{
			maze[x][y] = 9;
		}

		if (maze[x][y+1] != 1)
		{
			y++;
		}
		else if (maze[x+1][y] != 1)
		{
			x++;
		}
		else
			break;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << maze[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;


}