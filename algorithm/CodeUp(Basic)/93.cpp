#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

// 1. 미로 데이터 받기
// 2. 시작 위치 정하기
// 3. 오른쪽으로 이동하고, 막히면 아래로 내려가고, 더이상 움직일 수 없으면 터트림
// 4. 좌표배열이라서, 오른쪽으로 늘어나면 x 값이 늘어나고, 아래쪽으로 꺾으면 y 값이 늘어남

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


	int x = 1; int y = 1; // 0부터 시작하면 1 이 2나 진배없다 
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