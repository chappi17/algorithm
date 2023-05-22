#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

// 입력받기
// 바둑판 만들기
// 입력 받은 값 바둑판에 나열하기
// 입력 받은 값 바둑판에 나열하기

int main()
{
	int n;
	cin >> n;
	const int boardsize = 19;
	int arr[boardsize][boardsize] = {0};

	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
	}



	for (int i = 0; i < boardsize; i++)
	{
		for (int j = 0; j < boardsize; j++)
		{
			cout << "0" << " ";
		}
	cout << endl;
	}

}