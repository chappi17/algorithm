#include <iostream>
#include <string>
// �ƴ� ���ε��� ����ص� �Ǵ°Ÿ� ���� ����
// ���� �Ѳ����� ��� �޾Ƽ� �ѹ��� �� ���;��ϴ°��� �˾��� �Ƴ�
using namespace std;

int main()
{
	int Test;
	cin >> Test;

	for (int i = 0; i < Test; i++)
	{
		string s, p;
		int r;

		cin >> r >> s;

		for (int j = 0; j < s.length(); j++)
		{
			for (int k = 0; k < r; k++)
			{
				cout << s[j];
			}
		}
		cout << endl;
	}
}