#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// �Է� �޴� ���� x
// for������ �ݺ��ؼ� ����ϴµ�, �Է¹��� �������� ����ؼ� 
// �ϳ��� ���鼭 ��� 

int main()
{
	int x;
	cin >> x;

	for (int i = 0; i < x; i++)
	{
		cout << x - i << "\n";
	}
	return 0;
}