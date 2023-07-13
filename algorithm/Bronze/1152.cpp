#include <iostream>
#include <string>
using namespace std;

int main()
{
	int result = 0;
	string a;
	getline(cin, a);

	// 맨 처음과 마지막에 공백이 있으면 
	// 단어로 카운트 될 수 있음
	// 예외 처리 해줘야함 
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == ' ')
			result++;
	}
	if (a[0] == ' ') // 맨처음
		result--;
	if (a[a.length() - 1] == ' ') // 맨 마지막 
		result--;

		cout << result +1;	
}