#include <iostream>

using namespace std;

void Judge(int a)
{
	if (a % 2 == 0)
	{
		cout << a << "\n";
	}
}


int main()
{
	cout << "1 ~10 ������ ¦���� ����մϴ�" << "\n";

	for (int i = 1; i <= 10; i++)
	{
		Judge(i);
	}
}