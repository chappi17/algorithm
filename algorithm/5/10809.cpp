#include <iostream>
#include <cstring> // strnlen  �ִ� STL
using namespace std;

int main()
{
	char B[27] = { "abcdefghijklmnopqrstuvwxyz" };
	char S[101];
	int plag = 0;
	cin >> S;

	for (int i = 0; i < strnlen(B,27); i++) // ���ĺ� ������ ����
	{
		for (int j = 0; j < strnlen(S,101); j++) // �Է��� �ܾ��� ����
		{
			if (B[i] == S[j]) // ���ĺ� ������ , �Է��� �ܾ��� ���ĺ��� ������
			{
				cout << j << " "; // ���ĺ��� ó�� ���� ���� 
				plag = 0; // ���ĺ��� ������ -1 ��� ���ؾ� �� 
				break;
			}
			else
			{
				plag = 1; // ���ĺ� ������ �Է��� �ܾ��� ���ĺ��� �ٸ���
			}
		}
		if (plag == 1) // �� ������ ���ĺ��� �Է��� �ܾ ������ 
		{
			// -1 ��� 
			cout << "-1" << " ";
		}
	}
}