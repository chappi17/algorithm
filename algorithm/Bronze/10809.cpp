#include <iostream>
#include <cstring> // strnlen  있는 STL
using namespace std;

int main()
{
	char B[27] = { "abcdefghijklmnopqrstuvwxyz" };
	char S[101];
	int plag = 0;
	cin >> S;

	for (int i = 0; i < strnlen(B,27); i++) // 알파벳 모음의 길이
	{
		for (int j = 0; j < strnlen(S,101); j++) // 입력한 단어의 길이
		{
			if (B[i] == S[j]) // 알파벳 모음과 , 입력한 단어의 알파벳이 같을때
			{
				cout << j << " "; // 알파벳이 처음 나온 숫자 
				plag = 0; // 알파벳이 같으면 -1 출력 안해야 됨 
				break;
			}
			else
			{
				plag = 1; // 알파벳 모음과 입력한 단어의 알파벳이 다를때
			}
		}
		if (plag == 1) // 다 돌고나서 알파벳이 입력한 단어에 없으면 
		{
			// -1 출력 
			cout << "-1" << " ";
		}
	}
}