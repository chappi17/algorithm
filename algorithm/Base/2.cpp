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
	cout << "1 ~10 까지의 짝수를 출력합니다" << "\n";

	for (int i = 1; i <= 10; i++)
	{
		Judge(i);
	}
}