#include <iostream>

using namespace std;

int length(char* str)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}


int main()
{
	char a[10];
	int answer;
	cout << "���ڿ��� �Է��Ͻʽÿ�" << "\n";
	cin >> a;

	answer = length(a);
	cout << "���ڿ��� ���̴�" << answer << "�Դϴ�." << "\n";

}