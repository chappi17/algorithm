#include <iostream>
#include <string>
using namespace std;

int main()
{
	int result = 0;
	string a;
	getline(cin, a);

	// �� ó���� �������� ������ ������ 
	// �ܾ�� ī��Ʈ �� �� ����
	// ���� ó�� ������� 
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == ' ')
			result++;
	}
	if (a[0] == ' ') // ��ó��
		result--;
	if (a[a.length() - 1] == ' ') // �� ������ 
		result--;

		cout << result +1;	
}