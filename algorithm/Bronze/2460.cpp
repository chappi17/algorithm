#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 10���� ���������� ������� Ÿ�� ��������
// ���� ����� ���� �������� ã�ƾ���
// �ڿ��� 2��, 1-> ���� ��� 2-> ź ��� 


int main()
{
	int x, y;
	vector<int> t;
	int c = 0;


	for (int i = 0; i < 10; i++)
	{
		cin >> x >> y;
		c -= x;
		c += y;
		t.emplace_back(c);
	}
	sort(t.rbegin(), t.rend());
	cout << t[0] << "\n";

	return 0;
}