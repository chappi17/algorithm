#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// ���̽� ����
// ���� ���� c ������ �� v �Է¹ޱ�

int main()
{
	int n,c,v,a,b;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> c >> v;
		a = c / v;
		b = c % v;
		cout << "You get " << a << " piece(s) and your dad gets " << b << " piece(s)." << "\n";
	}	
}