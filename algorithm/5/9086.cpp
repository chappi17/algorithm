#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string n;
	string c,d;
	string b[11];
	int a;
// Ƚ�� 
	cin >> a;
// ���ڿ� �Է�
	for (int i = 0; i < a; i++)
	{
		cin >> n;
// ����
		c = n[0];
		d = n.back();
		b[i] = c + d;
	}
	
// ���
	for (int i = 0; i < a; i++)
	{
		cout << b[i] << endl;
	}
}