#include <iostream>
#include <cmath>
using namespace std;
// 3, 7 ,9 �� ������ �������� �� \
// while �� ������ ���϶��� ���� ���� ����

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int day = 1;
	while (!(day % a ==0 && day % b == 0 && day % c ==0) )// �򰥸���, ���� ���� ����� �տ�! ������
	{
		day++;
	}
	cout << day << endl;

}