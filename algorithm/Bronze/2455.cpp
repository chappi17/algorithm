#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// ��� ���� ���� ������ ����ϴ°� 
// ���� ����� ź ����� ������ �����ؼ� �ޱ�


int main()
{
	int down = 0;
	int up = 0;
	int result=0;
	int top = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> down;
		cin >> up;

		result -= down;
		result += up;
		if (result > top)
		{
			top = result;
		}
	}
	cout << top << "\n";
	return 0;
}