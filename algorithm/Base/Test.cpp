#include <iostream>

using namespace std;


int count(char str[], char ch)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ch)
		{
			count++;
		}
	}

	return count;
}

int main()
{
	cout << "���ڿ��� �Է��Ͻʽÿ�" << "\n";
	char a[10];
	char b;
	int answer;
	cin >> a;
	cout << "���ڿ����� �˻��� ���ڸ� �Է��Ͻʽÿ� " << "\n";
	cin >> b;

	answer = count(a, b);

	cout << a << " �ȿ� " << b << "�� �� " << answer << "�� �ֽ��ϴ�." << "\n";

}